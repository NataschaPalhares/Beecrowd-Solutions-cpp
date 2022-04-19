#include <iostream>
#include <cstring>
using namespace std;

int main() {

	char n1[12], n2[34];
	int pos, caso = 0;

	while (cin >> n1 >> n2) {
		int total = 0;
		caso++;
		for (int i=0; i < strlen(n2); i++) {

			if (n2[i] == n1[0]) {
				int tam = 1;
				pos = i + 1;
				for (int j = i+1, x = 1; n1[x]; x++, j++) {
					if (n2[j] == n1[x])
						tam++;
					else
						break;
				}
				if (tam == strlen(n1)) {
					total++;
				}
			}
		}
		cout << "Caso #" << caso << ":\n";
		if (total == 0)
			cout << "Nao existe subsequencia\n\n";
		else {
			cout << "Qtd.Subsequencias: " << total << endl;
			cout << "Pos: " << pos << endl;
			cout << endl;
		}
	}

	return 0;
}
