#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int p, n;
	cin >> p >> n;
	int v[n];
	bool y = true;

	for (int i=0; i<n; i++)
		cin >> v[i];

	for (int i=0; i<n-1; i++) {
		if (abs(v[i+1] - v[i]) > p) {
			y = false;
			break;
		}
	}
	if (y)
		cout << "YOU WIN\n";
	else
		cout << "GAME OVER\n";

	return 0;
}