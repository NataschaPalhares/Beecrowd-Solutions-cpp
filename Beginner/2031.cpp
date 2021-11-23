#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char player1[7], player2[7];
	int n;
	cin >> n;

	for (int i=0; i<n; i++) {
		cin >> player1 >> player2;
		if (strcmp(player1,"ataque")==0 && strcmp(player2,"pedra")==0)
			cout << "Jogador 1 venceu\n";
		else if (strcmp(player1,"pedra")==0 && strcmp(player2,"papel")==0)
			cout << "Jogador 1 venceu\n";
		else if (strcmp(player1,"ataque")==0 && strcmp(player2,"papel")==0)
			cout << "Jogador 1 venceu\n";
		else if (strcmp(player1,"papel")==0 && strcmp(player2,"papel")==0)
			cout << "Ambos venceram\n";
		else if (strcmp(player1,"pedra")==0 && strcmp(player2,"pedra")==0)
			cout << "Sem ganhador\n";
		else if (strcmp(player1,"ataque")==0 && strcmp(player2,"ataque")==0)
			cout << "Aniquilacao mutua\n";
		else
			cout << "Jogador 2 venceu\n";
	}
	return 0;
}