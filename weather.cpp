#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//Program to find max, min and average temperatures at weather stations.


int main() {
	double max;
	double min;
	double average;
	double temp;
	double total;
	int num;
	string name;
	
	total = 0;
	temp = 0;
	max = -999;
	min = 999;
	average = 0;
	num = -1;
	
	
	cout << "Please enter weather station name:";
	getline(cin, name);
	
	cout << "Please enter temperature values:\n";
	
	while ( temp != -999)
	{
		
		if (temp > max)
			max = temp;
		
		if (temp < min)
			min = temp;
			
		total = total + temp;
		
		num = num + 1;
		
		cin >> temp;
					
	}
	
	average = (total/num);
	
	cout << name << " had temperatures of;\n";
	cout << "Minimum: " << min << " degrees \n";
	cout << "Maximum: " << max << " degrees \n";
	cout << "Average: " << average << " degrees \n";
	
	
	return 0;
	
};