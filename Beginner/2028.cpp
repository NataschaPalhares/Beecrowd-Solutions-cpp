#include <iostream>
using namespace std;

int main() {

	int n, caso = 0;

	while(cin >> n) {
		int num = 1;
		num += ((n * (n+1))/ 2);
		caso++;

		cout << "Caso " << caso << ": " << num;

		if (n == 0)
			cout << " numero\n";
		else
			cout << " numeros\n";

		cout << "0";


		for (int i=1; i <= n; i++) {
			for (int j=1; j <= i; j++) {
				cout << " " << i;
			}
		}
		cout << "\n\n";
	}
	return 0;
}
