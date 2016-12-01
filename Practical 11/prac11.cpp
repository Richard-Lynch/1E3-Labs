#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void fill(double array[], int capacity, int& size, double sentinel);
int zerocrossings(double array[], int size);
double mean(double array[], int size);
double variance(double array[], int size);
double stddev(double array[], int size);

int main()
{
	const int CAPACITY = 100;
	double array[CAPACITY];
	int size;
	double sentinel = 9999;
	
	fill(array, CAPACITY, size, sentinel);
	int zeros = zerocrossings(array, size);
	double mean1 = mean(array, size);
	double variance1 = variance(array, size);
	double stddev1 = stddev(array, size);
	
	cout << "mean:" << mean1 << "\n" << "variance:" << variance1 << "\n" << "standard Deviation " << stddev1 << "\n" << "Zero crossings:" << zeros << endl;
	
return 0;
}


void fill(double array[], int capacity, int& size, double sentinel)
{
    size = 0;
    double x;
    cin >> x;
    while (size < capacity && x != sentinel)
    {
        array[size] = x;
        size = size+1;
        cin >> x;
    }
}


int zerocrossings(double array[], int size)
{
	int count = 0;
	for(int i=0; i<size-1; i++)
	{
		double test = array[i] * array[i+1];
		if (test < 0)
		{
			count++;
		}
	}
	return count;
}



double mean(double array[], int size)
{
	double ans = 0.0;
	double total = 0.0;
	int number = 0;
		
	for (int i=0; i<size; i++)
		{
		total = total + array[i];
		number = number + 1;
		}
		ans = total/number;
	return ans;
}



double variance(double array[], int size)
{
	double total = 0.0;
	double term, term_squared;
	double mean_value = mean(array, size);
	for(int i=0; i<size; i++)
	{
		term = array[i] - mean_value;
		term_squared = term * term;
		total = total + term_squared;
	}
	return total/(size-1);
}



double stddev(double array[], int size)
{
	return sqrt(variance(array, size));
}