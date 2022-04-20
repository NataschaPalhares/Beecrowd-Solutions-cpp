#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n;
	cin >> n;

	int h, m, o;

	for (int i=0; i<n; i++) {
		cin >> h >> m >> o;
		cout << setfill('0') << setw(2) << h << ":";
		cout << setfill('0') << setw(2) << m;
		cout << " - ";
		if (o == 1)
			cout << "A porta abriu!\n";
		else
			cout << "A porta fechou!\n";
	}
	return 0;
}
