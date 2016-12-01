#include <iostream>
#include <cmath>
using namespace std;

int main () {
	double cm;
	int inches, feet, yards;
	
	//request length in cms;
	cout<< "\n";
	cout << "Enter a length in centimetres: ";
	cin >> cm; 
	cout<< "\n";
	
	//Generate Inches Value
	inches= round(cm/2.54);
	
	//Output Inches
	cout <<"That equals roughly " << inches << " in." << "\n";
	cout<< "\n";
	
	//Claculate
	yards = inches/36;
	
	inches = inches%36;
	
	feet = inches/12;
	
	inches = inches%12;
	
	
	//Output Values
	cout<< "Which equals ";
	
	if (yards > 0)
		cout << yards << " yard";
	
	if (yards > 1)	 
		cout << "s"; 
	 
	if ( ((yards > 0) && ( (inches >0) || (feet > 0))) && (feet >0) )	
		cout << " , ";
	else
		if ((yards > 0) && (inches <1))
		cout <<".";
		else
		cout << " ";
	
	
	if (feet > 1) 
		cout << feet << " feet";
	
	if (feet==1) 
		cout << feet << " foot";
		
	if ( ( (feet > 0) || (yards > 0) )  && (inches > 0))
		cout << " and ";
	else
		cout <<".";
	
	if (inches > 0)
		cout << inches << " inch";
	
	if (inches > 1)	 
		cout << "es"; 
		
	if (
		cout<<"."
		
	cout<< "\n";
	
	
	return 0;
};