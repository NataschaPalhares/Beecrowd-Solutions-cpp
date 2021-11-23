#include <iostream>
using namespace std;

int main() {
	int h, m;
	int total, t = (8 * 60);
	char e;

	while (cin >> h >> e >> m) {
		total = (60 * h) + m + 60;
		if (total > t)
			cout << "Atraso maximo: " << (total - t) << endl;
		else
			cout << "Atraso maximo: 0\n"; 
	}
	return 0;
}