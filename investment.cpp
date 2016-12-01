#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() 
{
	int i;
	double rate, j, initial, x, y;
	
	//Request inputs
	cout << "\n" <<"Please input Initial Investment: \n";
	cin >> initial;
	cout << "\n";
	
	cout << "Please input Initial Interest Rate: \n";
	cin >> j;
	cout << "\n";
	
	cout << "Please input Year Increment: \n";
	cin >> x;
	cout << "\n";

	cout << "Please input Interest Rate Increment: \n";
	cin >> y;

	
	cout << setw(5) << left << "Rate ";

	
	for (i=x; i<=30; i=i+x)
	{
		cout << "\t" << i << " years ";
	}
	cout << "\n \n";
	
	for (j=j; j<=10; j=j+y)
	{
		cout << setw(5) << left <<j;
		
		for (i=5; i<=30; i=i+5)
		{
			cout << "\t" << setw(10) << left << (initial * (pow((1+(j/100)), i))) << " " ;
		}
 		
 		cout << "\n";
	}
		
		
			
	return 0;
}
