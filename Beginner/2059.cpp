#include <iostream>
using namespace std;

int main() {
	int p, j1, j2, c, a;
	cin >> p >> j1 >> j2 >> c >> a;
	int total = j1 + j2;

	if (total % 2 == 0) {
		if (p == 1) {
			if (c == 0)
				cout << "Jogador 1 ganha!\n";
			else if (c == 1 && a == 1)
				cout << "Jogador 2 ganha!\n";
			else
				cout << "Jogador 1 ganha!\n";
		}
		if (p == 0) {
			if (c == 0 && a == 0)
				cout << "Jogador 2 ganha!\n";
			else if (c == 0 && a == 1)
				cout << "Jogador 1 ganha!\n";
			else if (c == 1 && a == 0)
				cout << "Jogador 1 ganha!\n";
			else
				cout << "Jogador 2 ganha!\n"; 
		}
	}
	if (total % 2 != 0) {
		if (p == 0) {
			if (c == 0)
				cout << "Jogador 1 ganha!\n";
			else if (c == 1 && a == 1)
				cout << "Jogador 2 ganha!\n";
			else
				cout << "Jogador 1 ganha!\n";
		}
		if (p == 1) {
			if (c == 0 && a == 0)
				cout << "Jogador 2 ganha!\n";
			else if (c == 0 && a == 1)
				cout << "Jogador 1 ganha!\n";
			else if (c == 1 && a == 0)
				cout << "Jogador 1 ganha!\n";
			else
				cout << "Jogador 2 ganha!\n"; 
		}
	}


	return 0;
}