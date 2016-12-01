#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int i, j;
int array[70];

int main() 


{   
	for (i=0; i<70; i++)
		{
			cin >> array[i];
		}
	
	for ( j=20; j>=0; j--)
		{
			cout << setw(2) <<  j << " ";
			
			for (i = 0; i<=70; i++)
				{ 
					if (array[i] > j)
						cout << "*";
					else ( cout << " ");
				}
				
				cout << endl;
		}
	cout << "   " <<  "----|----+----|----+----|----+----|----+----|----+----|----+----|----+";
	

    return 0;
};
		