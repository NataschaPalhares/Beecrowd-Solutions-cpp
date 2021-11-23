#include <iostream>
using namespace std;

int main() {
	int s, t, f;
	cin >> s >> t >> f;

	if (s == 0)
		s = 24;

	int total = s + t + f;

	if (total == 24)
		total = 0;

	if (total > 24)
		total = total - 24;

	cout << total << endl;

	return 0;
}