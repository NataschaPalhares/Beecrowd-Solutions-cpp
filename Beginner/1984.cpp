#include <iostream>
using namespace std;

int main() {
	long long int n, x;
	cin >> n;

	while (n > 0) {
		x = n % 10;
		cout << x;
		n = n/10;
	}
	cout << endl;

	return 0;

}