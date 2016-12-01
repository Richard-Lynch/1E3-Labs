#include <iostream>

using namespace std;

//Program to calculate how many months it takes to pay off a €1500 loan at 12% APR, paying off €50 per month.


int main() {
	double initial_debt = 1500;
	double interest_rate = 0.01;//monthly rate of 1%
	double debt;
	double interest;
	double interest_total;
	int num_months;
	
	num_months = 0;
	interest = 0;
	interest_total = 0;	
	
	debt = initial_debt;
	
	while ( 0 < (debt))
	{
		interest = interest_rate*debt;
		
		debt = ((debt + (interest)-50));
		interest_total = interest_total + interest;
		num_months = num_months + 1;
	}
	
	cout << "This loan will take " << num_months << " to pay off. \n";
	cout << "Total interest paid will be " << interest_total << " Euro. \n";
	
	
	return 0;
	
};