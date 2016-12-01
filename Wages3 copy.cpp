//take employee's information and print out details//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() 
{
	string name;
	double hours, hourlyRate, weeklyWage, tax, prsi,  unionDues, netpay, taxcredit, taxaftercredit;
	
	//Request inputs
	cout << "Please enter hours you have worked this week:";
	cin >> hours;
	
	cout << "Please enter your hourly rate:";
	cin >> hourlyRate;
	
	cout << "Please enter your Tax Credit:";
	cin >> taxcredit;
    
    cin.ignore(INT_MAX, '\n');
    
    cout << "Please enter your name:";
	getline(cin, name);
	
	//Weekly Wage
	if (hours>35)
		weeklyWage =((35*hourlyRate)+((hours-35)*(1.5*hourlyRate)));
		
		else weeklyWage = hours*hourlyRate;
	
	
	tax = weeklyWage*(0.2);
	prsi = weeklyWage*(0.025);
	unionDues = 3.50;
	
	//Net Pay(Applying Tax Credits)
	
	
	
	if (taxcredit<tax)
		
		taxaftercredit = tax-taxcredit;
		netpay = (weeklyWage)-((taxaftercredit)+prsi+unionDues);
		
		else netpay = (weeklyWage)-(prsi+unionDues);
	
	//Output20
	cout << "\n";
	cout << "\n";
	cout << setw(20) << left << "Name:" << setw(10) << right << name << "  " << "\n";
	cout << setw(20) << left << "Hours:" << setw(10) << right << hours << "  " << "\n";
	cout << fixed << showpoint << setprecision(2);
	cout << setw(20) << left << "Hourly Rate:" << setw(10) << right << hourlyRate << "\n";
	cout << setw(20) << left << "Gross Wage:" << setw(10) << right << weeklyWage << "\n";
	cout << setw(20) << left << "Tax Credit:" << setw(10) << right << taxcredit << "\n";
	cout << setw(20) << left << "Tax @ 20%:" << setw(10) << right << tax << "\n";
	cout << setw(20) << left << "Tax After Credit:" << setw(10) << right << tax << "\n";
	cout << setw(20) << left << "PRSI @ 2.5%:" << setw(10) << right << prsi << "\n";
	cout << setw(20) << left << "Union Dues:" << setw(10) << right << unionDues << "\n";
	cout << "-----------------------------" << "\n";
	cout << setw(20) << left << "Net Pay:" << setw(10) << right << netpay << "\n";

	
	return 0;
}
