#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;



int triangleType (double x1, double x2, double x3, double y1, double y2, double y3);
double distance (double x1, double x2, double y1, double y2);
bool veryClose (double x, double y);

int main() 
{
double x1, x2, x3, y1, y2, y3;

	cout << "X and Y of first vertex: ";
	cin >> x1 >> y1 ;
	cout << "\n";
	
	cout << "X and Y of second vertex: ";
	cin >> x2 >> y2 ;
	cout << "\n";
	
	cout << "X and Y of thirds vertex: ";
	cin >> x3 >> y3 ;
	cout << "\n";
	

	
	int type =triangleType(x1, x2, x3, y1, y2, y3);
	if (type > 1)
		if (type == 2)
			{cout << "this triangle is isoceles.\n";}
		else
			{cout << "this triangle is equilateral.\n";}
	else {cout << "this triangle is scalene.\n";}
		
	
	
	return 0;
}


//returns true or false for factors. 
int triangleType (double x1, double x2, double x3, double y1, double y2, double y3)
{
	double side1, side2, side3;
	int matches = 0;
	
	side1 =  distance (x1, x2, y1, y2);
	side2 =  distance (x2, x3, y2, y3);
	side3 =  distance (x3, x1, y3, y1);
	
	
	if (veryClose (side1, side2))
		matches++;

	if (veryClose (side2, side3))
		matches++;
	
	if (veryClose (side3, side1))
   		matches++;
   		
   	return matches;
   }

//returns distance
double distance (double x1, double x2, double y1, double y2)
	{
		return sqrt( pow((x2-x1), 2) + pow((y2-y1), 2));
	}	
//veryVlose

bool veryClose (double x, double y) 
	{
		return (fabs(x-y) < 0.00001);
	}
		
		
		
		