#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main() {
	int c;
	char word[10002];

	cin >> c;

	for (int i=0; i < c; i++) {
		cin >> word;
		double time = strlen(word) * (0.01);
		cout << fixed << setprecision(2) << time << endl;
	}
	return 0;
}
