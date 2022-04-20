#include <iostream>
using namespace std;

int main() {

	int t;

	cin >> t;

	while (t != 0) {
		int n[t];

		for (int i=0; i < t; i++) {
			cin >> n[i];

			if (n[i] % 2 != 0) {
				cout << ((n[i] - 1) * 2) + 1 << endl;
			}
			else
				cout << ((n[i] - 2) * 2) + 2 << endl;
		}

		cin >> t;
	}
	return 0;
}
