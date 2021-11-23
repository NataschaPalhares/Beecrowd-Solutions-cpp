#include <iostream>
using namespace std;

int main() {
	int n, a, total = 0;
	cin >> n;

	for (int i=0; i<5; i++) {
		cin >> a;
		if (a == n)
			++total; 
	}
	cout << total << endl;
	
	return 0;
}