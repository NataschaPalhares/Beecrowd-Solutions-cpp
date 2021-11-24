#include <iostream>
using namespace std;

int main() {
	int n, x;
	cin >> n;
	double m[n], score = 0;
	int r[n];

	for (int i=0; i<n; i++) {
		cin >> r[i] >> m[i];
		if (m[i] > score) {
			score = m[i];
			x = i;
		}
	}

	if (score < 8)
		cout << "Minimum note not reached\n";
	else
		cout << r[x] << endl;

	return 0;
}