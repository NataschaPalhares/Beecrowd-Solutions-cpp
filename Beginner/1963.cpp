#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	double a, b;
	cin >> a >> b;
	double percentage;

	percentage = (b/a) - 1;

	cout << fixed << setprecision(2);
	cout << percentage * 100 << "%\n";
	
	return 0;
}