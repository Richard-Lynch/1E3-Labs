#include <iostream>
#include <cmath>

using namespace std;


int main ()
{
	double units, rent, main, newprofit, oldprofit, increase = 0;
	
	cout << "Please enter rent, units, maintenence and the increase/lost unit." << endl;
	
	cin >> rent >> units >> main >> increase ;
	
	cout << endl;
	
	newprofit = (units*rent) - (units*main);
	
	cout << "Rent" << "\t" << "Units" << "\t" << "Profit" << endl;

	while ( newprofit > oldprofit)
	{
		cout << rent << "\t" << units << "\t" << newprofit << endl;
		rent = rent + increase;
		units--;
		oldprofit = newprofit;
		newprofit = (units*rent) - (units*main);
		
	}
		
	cout << "The most profitable number of units to fill is: " << (units + 1) << endl;
	cout << "The rent for this number of units is: €" << (rent - increase) << endl;
	cout << "The profit for this number of units is €" << oldprofit << endl << endl;

	
	return 0;
}


