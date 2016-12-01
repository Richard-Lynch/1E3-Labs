#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

//Declares isAFactor
bool isAFactor (int i, int n);
bool prime (int n);
void print_s (int n);


int main() 
{
	int n; 
	
	
	cout << "----+----|----+----|----+----|----+----|----+----| \n";
	cout << "* \n";
	
	
	for (n=2; n<=50; n++)
		{
			if ( prime (n) == 1)
			{
			 	print_s (n);	
			 
			 	cout << " \n";
			}
			
		}
	
	
	return 0;
}

//returns true or false for factors. 
bool isAFactor (int i, int n)
{
   	return (n % i == 0 );
}

//returns primes
bool prime (int n)
{
	int i;
	for (i=2; i<n; i++)
	{
		if ( isAFactor(i, n) )
			return false;	
	}
			
	return true; 
}

//prints n primes in stars.
void print_s (int n)
	{
		int x;
		for (x=0; x<=n; x++)
		cout << "*";
	}
		
		
		
		
		
		
		
	
	