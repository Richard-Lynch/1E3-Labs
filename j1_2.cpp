//
//  j1.cpp
//  
//
//  Created by Richard Lynch on 07/05/2015.
//
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

double adj_ (double weighting, double cap, double value);
void best_ (double adj, double adj_best, string bn, string Name, double best_value, double value);


int main ()
{
    //declare vlaues
    double rent, distance_w, distance_g, distance_o, total= 0;
    
    double wrent, wdistance_w, wdistance_g, wdistance_o = 0;
    
    double rent_cap, distance_w_cap, distance_g_cap, distance_o_cap = 0;
    
    double adj_rent, adj_distance_w, adj_distance_g, adj_distance_o = 0;
    
    double best_rent, best_dis_w, best_dis_g, best_dis_o, best_total = 0;
    
    double adj_best_rent, adj_best_dis_w, adj_best_dis_g, adj_best_dis_o, adj_best_total = 0;
    
    string brn, bdwn, bdgn, bdon, btn;
    
    string weight, Max_values;
    
    
    
    string name = "abc";
    
    //output headers
    cout << endl;
    
    cout << setw(10) << left << "Name" << setw(10) << left << "IndvRent" << setw(10) << left << "Dis_Work" << setw(10) << left << "Dis_Out" << setw(10) << left << "Dis_Gym" << setw(10) << left << "Total" <<  "\n";
    
    cout << endl;
    
    //intake weightings
    cin >> weight >> wrent >> wdistance_w >> wdistance_g >> wdistance_o ;
    
    //intake cap values
    cin >> Max_values >> rent_cap >> distance_w_cap >> distance_g_cap >> distance_o_cap ;

    
    //input initial name
    cin >> name;
    
    
    //sentinal loop
    while ( name != "999")
    {
        //intake values
        cin >> rent >> distance_w >> distance_g >> distance_o ;
        
    
        //rent
        adj_rent = wrent - ((pow((rent/(rent_cap/10)), 2))/(100/wrent));
        
        if (adj_rent > adj_best_rent)
        {
            adj_best_rent = adj_rent;
            brn = name;
            best_rent = rent;
        }
        
    
        //distance to work
        adj_distance_w = wdistance_w - ((pow((distance_w/(distance_w_cap/10)), 2))/(100/wdistance_w));
        
        if (adj_distance_w > adj_best_dis_w)
            {
                adj_best_dis_w = adj_distance_w;
                bdwn = name;
                best_dis_w = distance_w;
            }
        
        //distance to gym
        adj_distance_g = wdistance_g - ((pow((distance_g/(distance_g_cap/10)), 2))/(100/wdistance_g));
        
        if (adj_distance_g > adj_best_dis_g)
        {
            adj_best_dis_g = adj_distance_g;
            bdgn = name;
            best_dis_g = distance_g;
        }

        
        //distance to out
        adj_distance_o = (wdistance_o - ((pow((distance_o/(distance_o_cap/10)), 2))/(100/wdistance_o)));
        
        if (adj_distance_o > adj_best_dis_o)
        {
            adj_best_dis_o = adj_distance_o;
            bdon = name;
            best_dis_o = distance_o;
        }
 
        
        //total
        total = adj_rent + adj_distance_w + adj_distance_o + adj_distance_g;
        
        if (total > best_total)
        {
            btn = name;
            best_total = total;
        }

        
        //set # of decimal places
        cout << fixed << showpoint << setprecision(2);
    
        
        //output values
        cout << setw(10) << left << name << setw(10) << left << adj_rent << setw(10) << left << adj_distance_w << setw(10) << left << adj_distance_o << setw(10) << left << adj_distance_g << setw(10) << left << total << "\n";
        
        //cout << endl;
    
        //intake new name
        cin >> name;
    }
    
cout << endl;
    
    
cout << setw(10) << left << "Best" << setw(10) << left << "IndvRent" << setw(10) << left << "Dis_Work" << setw(10) << left << "Dis_Out" << setw(10) << left << "Dis_Gym" << setw(10) << left << "Total" <<  "\n" <<  "\n";
cout << setw(10) << left << " " << setw(10) << left << brn << setw(10) << left << bdwn << setw(10) << left << bdon << setw(10) << left << bdgn << setw(10) << left << btn << "\n";
cout << setw(10) << left << " " << setw(10) << left << best_rent << setw(10) << left << best_dis_w << setw(10) << left << best_dis_o << setw(10) << left << best_dis_g << setw(10) << left << best_total << "\n" <<  "\n";
    
    return 0;
}

double adj_ (double weighting, double cap, double value)
{
    double adj = weighting - ((pow((value/(cap/10)), 2))/(100/weighting));
    
    return adj;
}

void best_ (double adj, double adj_best, string bn, string Name, double best_value, double value)
{
    if (adj > adj_best)
    {
        adj_best = adj;
        bn = Name;
        best_value = value;
    }
    
}



