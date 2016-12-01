#include <iostream>
#include <iomanip> //for io manipulation//
#include <cmath>
using namespace std;

int main() {
    int years;
    double j, value, initial;

      
	cout << "input initial value. \n";
	cin >>initial;
    cout << "\n";
    
    
    cout << "Rate ";
    for (years=5;years<=30;years=years+5)
     {
        cout << setw(5) << years << " years";
     }
    cout << "\n";
	
    /* print a line of ----------- */
    //for (i=1;i<=58;i++) cout << "-";
    //cout << "\n";)
    
    /* Now print rows 1 to 12 */
    for (j=5;j<=10;j=j+0.5)
       {
       /* print table row */
       cout << setw(5) << j << " ";//This is the left hand column
       for (years=5;years<=30;years=years+5)
        {
			value = initial*(pow((1+(j/100)),  years));
            cout << setw(5) << value;
        }
        cout << "\n";
     }
    
    return 0;
}