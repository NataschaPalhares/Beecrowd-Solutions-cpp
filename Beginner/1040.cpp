#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float n1, n2, n3, n4, n5, media;
	cin >> n1 >> n2 >> n3 >> n4;
	media = ((2*n1) + (3*n2) + (4*n3) + (1*n4))/10;
	cout << fixed << setprecision(1);
	if (media >= 7.0) {
		cout << "Media: " << media << endl;
		cout << "Aluno aprovado." << endl;
	}
	else if (media < 5.0) {
		cout << "Media: " << media << endl;
		cout << "Aluno reprovado." << endl;
	}
	else {
		cin >> n5;
		cout << "Media: " << media << endl;
		cout << "Aluno em exame." << endl;
		cout << "Nota do exame: " << n5 << endl;
		if ((n5 + media)/2 >= 5.0)
			cout << "Aluno aprovado." << endl;
		else
			cout << "Aluno reprovado." << endl;
		cout << "Media final: " << ((n5 + media)/2) << endl;
	}
	return 0;
}
