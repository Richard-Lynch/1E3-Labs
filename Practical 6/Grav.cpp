#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

const double G = 6.674e-11;


/*declares for Gravitational force*/
double grav_force (double m1, double m2, double d);


int main() 
{
	string ans, y, n;
	
	ans = "y";
	
	while (ans == "y")
		{
			double m1, m2, d;
			
			cout << "\n" << "Please enter mass of first object in Kg: \n";
			cin >> m1;
			cout << " \n";
		
			cout << "Please enter mass of second object in Kg: \n";
			cin >> m2;
			cout << " \n";
		
			cout << "Please enter distance between objects in M: \n";
			cin >> d;
			cout << " \n";
		
			cout << "Force is equal to " << grav_force ( m1, m2, d) << " Newtons." << "\n";
		
			cout << "Do you wish to run program again? [y/n] \n";
			cin >> ans;
		};
		//else 
		//	{ cout << "Thank you for using this program. \n" };
	
	return 0;
}

/* returns the gravitational force between two objects, mass m1 and m2, at distance d */
double grav_force (double m1, double m2, double d) 
	{
		
		
    	return (G*m1*m2)/(d*d);
	}
