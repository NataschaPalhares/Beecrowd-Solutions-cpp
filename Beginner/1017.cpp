#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    int spent_time, average_speed;
    double spent_fuel;
    cin >> spent_time >> average_speed;
    spent_fuel = ((spent_time * average_speed)/12.0);
    cout << fixed << setprecision(3);
    cout << spent_fuel << endl;
    return 0;
}
