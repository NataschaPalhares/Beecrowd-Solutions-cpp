#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int distance;
	double fuel_spent;
	cin >> distance >> fuel_spent;
	cout << fixed << setprecision(3);
	cout << (distance/fuel_spent) << " ";
	cout << "km/l" << endl;
	return 0;
}
