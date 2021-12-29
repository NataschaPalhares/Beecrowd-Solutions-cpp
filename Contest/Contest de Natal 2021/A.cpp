#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	char t[n][40];
	int v[n];
	int total[10] = {};
	int x = 1, p = 0;

	for (int i=0; i<n; i++)
		cin >> t[i] >> v[i];

	while (x < 11) {
		for (int i=0; i<n; i++) {
			if (v[i] == x)
				total[p] += 1; 
		}
		x++;
		p++;
	}
	char cat[10][20] = {"Brinquedos", "Alimentos", "Roupas", "Calcados", "Eletronicos", "Livros", "Gadgets", "Smartphones", "Jogos", "Papelaria"};

	for (int i=0; i<10; i++)
		cout << "Total de " << cat[i] << ": " << total[i] << endl;

	return 0;
}
