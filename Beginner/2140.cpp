#include <iostream>
using namespace std;

int main() {

	int n, m;

	cin >> n >> m;

	while(n != 0 && m != 0) {
		int total = 0;

		m -= n;

		if (m >= 100) {
			m -= 100;
			total++;
		}

		if (m >= 50) {
			m -= 50;
			total++;
		}

		if (m >= 20) {
			m -= 20;
			total++;
		}

		if (m >= 10) {
			m -= 10;
			total++;
		}

		if (m >= 5) {
			m -= 5;
			total++;
		}

		if (m >= 2) {
			m -= 2;
			total++;
		}

		if (m == 0 && total == 2)
			cout << "possible\n";
		else
			cout << "impossible\n";

		cin >> n >> m; 
	}

	return 0;
}
