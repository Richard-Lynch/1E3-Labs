#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


const int ARRAY_SIZE=20;

void read_ans (char ans[], int ARRAY_SIZE);
int score ( char stu[], char myarray[], int ARRAY_SIZE) ;
int main()
{ 
	char stu[ARRAY_SIZE];
	char mod[ARRAY_SIZE];
	int i, stu_num;

	read_ans(mod, ARRAY_SIZE);
	
	cin >> stu_num;	
	while (stu_num > 0)
	{
		read_ans(stu, ARRAY_SIZE);
		cout << stu_num << " " << score(stu, mod, ARRAY_SIZE) << "\n";
		cin >> stu_num;	
	}
		

	
    return 0;
}

void read_ans (char array[], int ARRAY_SIZE)
{
	int i;
	
	for (i=0; i<ARRAY_SIZE; i++)
	{
		cin >> array[i];
	}
}
	


	
int score ( char stu[], char myarray[], int ARRAY_SIZE) 
{
	
				int score = 0;
				int i;
				for (i=0; i<ARRAY_SIZE; i++)
					if (myarray[i] == stu[i])
					score = score + 2;
					else if (stu[i] != 'x')
							{
								score = score -1;
							}
				
	return score;
}
