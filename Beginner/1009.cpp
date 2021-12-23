#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
 
int main() {
	double fixed_salary, total_sale, total;
	string nome;
	cin >> nome >> fixed_salary >> total_sale;
	total = (fixed_salary + (total_sale * 0.15));
	cout << "TOTAL" << " " << "=" << " " << "R$" << " ";
	cout << fixed << setprecision(2) << total << endl;
	return 0;

}
