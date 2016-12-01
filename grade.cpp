#include <iostream>
#include <string>
using namespace std;

//decalre lettergrade function.
string letter_grade (double av_mark);
int n;
double mark;
double average;
double total;
double av_mark;

int main ()
{
	string student_number, exam_code, grade, failed_exam_code;
	//char D, P1, P2, P3, F
	
	bool fail = false;
	
	cin >> student_number;
	while ( student_number != "999")
		{
			bool fail = false;
			total = 0;
			
			cout << student_number  << "\t";
			cout << "Failed: ";
			
			
			for (n=0; n<8; n++)
				{
					//intakes data
					cin >> exam_code >> mark;
					
					//will ouytput failed axam codes as it goes along.
					if (mark < 40)
					{
						cout << exam_code << " ";
						fail = true ;
					}
						
						
					//adds to running total
					total = total + mark; 
					
				}
				
			av_mark = total/8;
			
			cout << "Average: " << av_mark << "% \t";
			cout << "Grade: " 
			if (fail == true);
				{cout << "F"	<< " .\n";
			else 
			cout << letter_grade (av_mark) << " .\n";
				}
			
			cin >> student_number;
		}
		
		
	
	
return 0;
}


//letter grade function to convert from average % to grade. ( double to string)
string letter_grade (double av_mark)
	{
		if(av_mark >= 70)
			return "D";
			
		if(av_mark >= 60)
			return "P1";
			
		if(av_mark >= 50)
			return "P2";
			
		if(av_mark >= 40)
			return "P3";
			
		return "F";
	}
	
