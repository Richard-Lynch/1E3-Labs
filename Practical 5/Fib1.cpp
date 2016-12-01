#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() 
{
	int i, j, prev, curr, next,x ;
	
	//Request inputs
	cout << "Please input small positive interger: \n";
	cin >> i;
	cout << "\n";
	/Users/Richard/Google Drive/Documents/College/Eng 2014:2015/1E3 Programing/Labs/Practical 5/Fib2.cpp
/Users/Richard/Google Drive/Documents/College/Eng 2014:2015/1E3 Programing/Labs/Practical 5/Fib3.cpp
/Users/Richard/Google Drive/Documents/College/Eng 2014:2015/1E3 Programing/Labs/Practical 5/FibL.cpp
/Users/Richard/Google Drive/Documents/College/Eng 2014:2015/1E3 Programing/Labs/Practical 5/FibS.cpp
/Users/Richard/Google Drive/Documents/College/Eng 2014:2015/1E3 Programing/Labs/Practical 5/investment.cpp
	//set intial prev/curr
	prev=0;
	curr=1;
	x=2;
	
	//cout start
	cout << prev << " " << curr << " ";
	
	//cout sequence
	for (j=3; j<=i; j++)
		{
			//calc & cout next
			next = prev + curr;
			cout <<  next << " ";
			
			//set new values
			prev = curr;
			curr = next;
			
			x=1+x;			}
			
	//number of values.
	cout << "\n"<< x << " Terms were calculated. \n";
	
	return 0;
}
