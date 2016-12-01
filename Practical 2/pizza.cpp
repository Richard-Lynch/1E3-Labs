#include <iostream>
using namespace std;

int main () {
	
	//define variables;
	double diameter, price, radius, area, ppsi ;
	
	
	//request diameter in inches;
	cout<< "\n";
	cout << "Enter a diameter in inches: ";
	cin >> diameter ;
	
	//request price;
	cout << "Enter a price in Euro: ";
	cin >> price;
	
	//Generate radius Value
	radius= diameter/2;
	
	//calculate area
	area = 3.14*radius*radius;
	
	//calulate price
	ppsi = (price/area)*100;
	
	//output info
	cout<< "\n";
	cout<< "\n";
	cout<< "Input Diameter: " << diameter << ".\n";
	cout<< "Input Price: " << price << ".\n";
	cout<< "\n";
	cout<< "The Area is " << area << " Inches Squared." << "\n";
	cout<< "The Price Per Inch in Cent is " << ppsi << " Cent." << "\n";
	cout<< "\n";
	cout<< "Thank you for shopping at Dominoes." << "\n";
	cout<< "\n";
	
	return 0;
};