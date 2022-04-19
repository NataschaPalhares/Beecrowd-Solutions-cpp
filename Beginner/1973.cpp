#include <iostream>
using namespace std;

int main() {
	int n;

	cin >> n;

	int sheep[n];
	int stars[n];

	long long int total = 0;

	for (int i=0; i<n; i++) {
		cin >> sheep[i];
		stars[i] = 1;
		total += sheep[i];
	}

	int x = 0;

	while(true) {

		if (x == 0 && sheep[x] % 2 == 0) {
			stars[x] = 0;
			if (sheep[x] > 0) {
				sheep[x]--;
				total--;
			}
			break;
		}

		else if (x == n-1 && sheep[x] % 2 == 1) {
			stars[x] = 0;
			if (sheep[x] > 0) {
				sheep[x]--;
				total--;
			}
			break;
		}
		else if (sheep[x] % 2 == 1) {
			sheep[x]--;
			total--;
			stars[x] = 0;
			x++;
		}
		else if (sheep[x] % 2 == 0) {
			stars[x] = 0;
			if (sheep[x] > 0) {
				sheep[x]--;
				total--;
			}
			x--;
		}
	}

	int attacked = 0;

	for (int i=0; i < n; i++) {
		if (stars[i] == 0)
			attacked++;
	}

	cout << attacked << " " << total << endl;
	return 0;
}
