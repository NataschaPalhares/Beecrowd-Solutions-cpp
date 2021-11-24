#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, a;
	cin >> n;

	for (int i=0; i<n; i++) {
		cin >> a;
		if (2015 > a)
			cout << (2015 - a) << " D.C.\n";
		else
			cout << (a - 2014) << " A.C.\n";
	}

	return 0;
}