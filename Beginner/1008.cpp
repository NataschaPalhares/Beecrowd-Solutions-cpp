#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    int number, worked_hours;
    float amount_per_hour, salary;
    cin >> number >> worked_hours >> amount_per_hour;
    salary = (worked_hours * amount_per_hour);
    cout << "NUMBER" << " " << "=" << " " << number << endl;
    cout << fixed << setprecision(2);
    cout << "SALARY" << " " << "=" << " " << "U$" << " " << salary <<endl;
 
    return 0;
}
