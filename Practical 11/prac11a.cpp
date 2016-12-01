#include <iostream>
#include <cmath>

using namespace std;

void readinarray (double a[], int size, const double sentinal, int& asize);
double mean (double a[], int asize);
double variance1 (double a[], int asize);
double crossings (double a[], int asize);
double deviation (double a[], int asize);

int main ()
{
	
	
	const int size = 100;
	double a[size];
	const double sentinal = 9999;
	//double numbers [SIZE];
	int asize=0;
	double average=0;
	double variance=0;
	double deviation1=0;
	int crossing=0;
	double Mean1;
	
	readinarray(a, size, sentinal, asize);

	Mean1 = mean(a,asize);
	variance = variance1(a,asize);
	deviation1 = deviation(a,asize);
	crossing = crossings(a,asize);
	
	cout << "Mean: " << Mean1 << endl;
	cout << "Variance: " << variance << endl;
	cout << "Deviation: " << deviation1 << endl;
	cout << "Crossings: " << crossing << endl;
	

	return 0;
}



double mean (double a[], int asize)
{
	int i = 0;
	double answer;
	double total=0;
	for (i=0; i<asize; i++)
		{
			total = a[i] + total;
		}
	

	answer = (total/asize);
	
	return answer;
}

double variance1 (double a[], int asize)
{
	int i = 0;
	double variance_total=0;
	double variance;
	double answer_v = 0;
	double average=mean(a, asize);
	
	for (i=0; i<asize; i++)
		{
			 variance = pow((a[i] - average), 2);
			 variance_total = variance + variance_total; 
		}
		
	answer_v = (variance_total/ (asize - 1));

	return answer_v;
}


double deviation (double a[], int asize)
{
	double answer_d;
	answer_d = sqrt(variance1(a, asize));
	return answer_d;
}

double crossings(double a[], int asize)
{
	int i = 0;
	int total = 0;
	for (i=0; i<asize; i++)
		{
			if ((a[i]*a[i-1]<0))
			total = total +1;
		}
	
	return total;
}	
	
	
void readinarray(double a[], int size, const double sentinal, int& asize)
{
    asize = 0;
    double x;
    cin >> x;
    while (asize < size && x != sentinal)
    {
        a[asize] = x;
        asize = asize+1;
        cin >> x;
    }
}