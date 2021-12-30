#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double p, f;
	int q;

	cin >> p >> q >> f;

	double a;

	for (int i=0; i<q; i++) {
		cin >> a;
		p += a;
	}

	cout << fixed << setprecision(2) << p << endl;

	if (p > f)
		cout << "papai noel precisa fazer exercicios\n";
	else
		cout << "ho ho ho\n";

	return 0;
}
