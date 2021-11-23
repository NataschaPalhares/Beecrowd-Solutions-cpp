#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double v, d;
	double altura, area;
	double pi = 3.14;

	while (cin >> v >> d) {
		double raio = d/2;
		area = pi * raio * raio;
		altura = v/(area);

		cout << fixed << setprecision(2);
		cout << "ALTURA = " << altura << endl;
		cout << "AREA = " << area << endl;
	}
	return 0;
}