#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int v[n];
	int cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0;

	for (int i=0; i<n; i++) {
		cin >> v[i];
		if (v[i] % 2 == 0)
			++cont2;
		if (v[i] % 3 == 0)
			++cont3;
		if (v[i] % 4 == 0)
			++cont4;
		if (v[i] % 5 == 0)
			++cont5;
	}

	cout << cont2 << " Multiplo(s) de 2\n";
	cout << cont3 << " Multiplo(s) de 3\n";
	cout << cont4 << " Multiplo(s) de 4\n";
	cout << cont5 << " Multiplo(s) de 5\n";

	return 0;
}