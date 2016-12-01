#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() 
{
	int i, j, prev, curr, next, x, large ;
	
	//Request inputs
	cout << "Please a Large Positive Interger: \n";
	cin >> large;
	cout << "\n";
	
	//set intial prev/curr
	prev=0;
	curr=1;
	x=0;
	next = 0;
	while (next <= large)
	{
		x++;
		//cout next
		cout <<  next << " ";
		
		//set new values
		prev = curr;
		curr = next;
		
		//calc next
		next = prev + curr;	
	}
			
	//number of values.
	cout << "\n"<< x << " Terms were calculated. \n";
	
	return 0;
}
