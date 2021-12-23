#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	double a, b, c, delta;
	cin >> a >> b >> c;
	delta = ((b * b) - (4 * a * c)); 

	if (a == 0)
		cout << "Impossivel calcular" << endl;
	else if (delta < 0)
		cout << "Impossivel calcular" << endl;
	else {
		cout << fixed << setprecision(5);
		cout << "R1 = " << (-b + sqrt(delta))/(2 * a) << endl;
		cout << "R2 = " << (-b - sqrt(delta))/(2 * a) << endl;
	}
	return 0;
}
