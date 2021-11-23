#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n, a, b;
	cin >> n;
	double total = 0.0;

	for (int i=0; i<n; i++) {
		cin >> a >> b;
		if (a == 1001)
			total += b * 1.5;
		else if (a == 1002)
			total += b * 2.5;
		else if (a == 1003)
			total += b * 3.5;
		else if (a == 1004)
			total += b * 4.5;
		else
			total += b * 5.5;
	}
	cout << fixed << setprecision(2);
	cout << total << endl;

	return 0;
}