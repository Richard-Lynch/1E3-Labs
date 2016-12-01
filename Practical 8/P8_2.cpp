//Functions for Pratical 8 - 2014

#include <iostream>
using namespace std;

int month_length (int m, int y);
int year_length (int y);
bool leap_year (int year);
int daynumber (int day, int month, int year);
void dayMthYr (int numdays, int& day, int& month, int& year);
void calc_date (int& numdays, char sign, int value, char units, int& year)
;
int main ()
{
	int day, month, year, numdays;
	
	char sign, units;
	
	int value;
	
	//cin >> day >> month >> year;
	
	//cout << daynumber ( day, month, year) << "\n";
	
	//cin >> numdays;
	
	cin >> numdays;
	
	//numdays = daynumber(day, month, year);
	
	dayMthYr(numdays, day, month, year);
	
	cout << day << "/" << month << "/" << year << "\n";
	
	sign = '+';
	value = 1;
	units = 'y';
	
	calc_date (numdays, sign, value, units, year); 
	//cout << calc_date (numdays, sign, value, units) << "\n";
	
	daynumber (day, month, year);
	
	dayMthYr(numdays, day, month, year);
	
	cout << day << "/" << month << "/" << year << "\n";

	
	
	
	
	
    //Write code here to test dayMthYr by converting a date to daynumber
    //and then using dyMthYr to convert it back, and checking if the
    // resulting day, month and year are what you started with; but be careful
    //not to let dayMthYr overwrite the values provided by the user.



    //Write code here to test the calc_date function


    return 0;
}


void dayMthYr (int numdays, int& day, int& month, int& year)
{
	month = 1;
	year = 1900;
	
	while (numdays > year_length(year))
		{
			numdays = numdays - year_length(year);
			year++;
		}
		
	while (numdays > month_length(month, year))
		{	
			numdays = numdays - month_length(month, year);
			month++;
		}
		
	
	day = numdays;
	
	
    //a dummy definition - should be replaced with your code to do the job.
    //if numdays were 1, this would do -
    //day=1; month=1; year=1900;
}


//converts a date to a daynumber
void daynumber (int day, int month, int year, int& numdays)
{
    int y, m, daynumber;
    //accumelate days in all years before the given one
    daynumber = 0;
    for (y = 1900; y < year; y++)
    {
        numdays = numdays + year_length (y);
    }

    //in the given year, accumelate days in all months before the given month
    for (m = 1; m < month; m++)
    {
        numdays = numdays + month_length(m, year);
    }

    //accumelate all the days in the given month, including the given day
    numdays = numdays + day;
}


//gives back the number of days in the given month of the given year
int month_length (int m, int y)
{
    if (m==2) 
        if (leap_year(y))
	      return 29;
        else
		return 28;
      
    else if (m==9 || m==4 || m==6 || m==11)  //i.e. September, April, June, or November
        return 30;
    
    else
        return 31;
}


int year_length (int y)
{
    if (leap_year (y)) 
        return 366;

    else
        return 365;
}
    

bool leap_year (int year)
{
    //returns true if year is a leap year
    
    if (year % 4 == 0) //all others are definitely not leap
        if (year < 1583)
            return true;
   
        else //after 1583
            if ((year % 100 == 0) && (year % 400 != 0))   //e.g. 1900
                return false;
            else //e.g. 1904 or 2000
                return true;

        else //not divisible by 4
            return false;
}

void calc_date (int& numdays, char sign, int value, char units, int& year)
{	
	//returns new daynumber, after date arithmetic.
	
	
	int days = 0;
	
	if(units == 'y')
	{
		if ( sign == '-')
			{
				year = year - value;
			}
		else
			{
				year = year + value;
			} 
	}
	else
	{
		if (units == 'w')
			{
				days = value * 7;
			}
		else
			{
				days = value;
			}
			
			
		if ( sign == '-')
			{
				days = - days;
			}
		else
			{
				days = days;
			}
		numdays = numdays + days;

	}
		
	
	
}

	
	
	
	
	
	
	
	
	

