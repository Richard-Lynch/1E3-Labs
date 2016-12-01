#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main ()
{
	double rent, distance_w, distance_g, distance_o, = 0;
    
    double wrent, wdistance_w, wdistance_g, wdistance_o, = 0;
    
    
	
	cout << "Please enter rent, distance from work, distance from gym and distance from going out." << endl;
	
	cin >> rent >> distance_w >> distance_g >> distance_o ;
	
	cout << endl;
    
    cout << "Please enter weightings for rent, distance from work, distance from gym and distance from going out." << endl;
    
    cin >> wrent >> wdistance_w >> wdistance_g >> wdistance_o ;
    
    cout << endl;
    
    //rent
    int rent_cap = 1000
    
    wrent = 50
    
    double adj_rent = wrent - ((pow((rent/(rent_cap/10)), 2))/2)
    
    //distance to work
    int distance_w_cap = 6000
    
    wdistance_w = 20
    
    double adj_distance_w = wdistance_w - ((pow((distance_w/(distance_w_cap/10)), 2))/2)
    
    //distance to gym
    int distance_g_cap = 6000
    
    wdistance_g = 10
    
    double adj_distance_g = wdistance_g - ((pow((distance_g/(distance_g_cap/10)), 2))/2)
    
    //distance to out
    int distance_o_cap = 6000
    
    wdistance_o = 20
    
    double adj_distance_o = wdistance_o - ((pow((distance_o/(distance_o_cap/10)), 2))/2)
    
    //out adjusted values
	cout << "Rent" << "\t" << "Dis_Wwork" << "\t" << "Dis_Out" << "\t" << "Dis_Gym" << endl;

    cout << rent << "\t" << adj_distance_w << "\t" << adj_distance_o << "\t" << adj_distance_g << endl;
    
    cout << endl;
		
	cout << "The total value is " << rent + adj_distance_w + adj_distance_o + adj_distance_g << "/100" << endl;

	return 0;
}


