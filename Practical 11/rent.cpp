#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main () {
	 int total_no_units=50;
	 double all_rented_out_rent=600;
	 double increment=40;
	 double maintance_per_unit=27;
	
	 int n = total_no_units;
	 double rent = all_rented_out_rent;
	 double profit_for_n_units, profit_for_n_minus_1_units;
	 cout << "      Units      Rent    Profit\n";
	
	 profit_for_n_units = (rent - maintance_per_unit)*n;
	
	 cout << setw(10) << n << setw(10) << rent;
	 cout << setw(10) << profit_for_n_units << endl;
	
	 profit_for_n_minus_1_units = (rent + increment - maintance_per_unit)*(n-1);
	
	
	 while (profit_for_n_units < profit_for_n_minus_1_units) {
		 n = n-1;
		 rent = rent+increment;
		 profit_for_n_units = profit_for_n_minus_1_units;
		 cout << setw(10) << n << setw(10) << rent;
		 cout << setw(10) << profit_for_n_units << endl;
	profit_for_n_minus_1_units = (rent + increment - maintance_per_unit)*(n-1);
	}
	
	 cout << "\n\nMaximum profit is when rent is " << rent << " which is ";
	 cout << n << " units occupied at a profit of " << profit_for_n_units << endl;
	 cout << "For " << rent+increment << ", " << n-1 << " are occupied and profit is ";
	 cout << profit_for_n_minus_1_units << endl;
 return 0;
}