#include <iostream>
using namespace std;

int main() {
	int n, l;
	cin >> n >> l;
	long long int perimeter = 0;

	for (int i=0; i<n; i++)
		perimeter += l;

	cout << perimeter << endl;

	return 0;
}