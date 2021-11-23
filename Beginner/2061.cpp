#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	char acao[8];

	for (int i=0; i<m; i++) {
		cin >> acao;
		if (strcmp(acao,"fechou")==0)
			++n;
		if (strcmp(acao,"clicou")==0)
			--n;
	}

	cout << n << endl;

	return 0;
}