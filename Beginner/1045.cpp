#include <iostream>
using namespace std;

int main() {
	double a, b, c, aux;
	cin >> a >> b >> c;

	if (b > a && b > c) {
		aux = a;
		a = b;
		b = aux;
	}
	if (c > a && c > b) {
		aux = a;
		a = c;
		c = aux;
	}
	if (a >= b + c)
		cout << "NAO FORMA TRIANGULO" << endl;
	else {
		if (a*a == b*b + c*c)
			cout << "TRIANGULO RETANGULO" << endl;
		if (a*a > b*b + c*c)
			cout << "TRIANGULO OBTUSANGULO" << endl;
		if (a*a < b*b + c*c)
			cout << "TRIANGULO ACUTANGULO" << endl;
		if (a==b && a==c)
			cout << "TRIANGULO EQUILATERO" << endl;
		if (a==b && a!=c)
			cout << "TRIANGULO ISOSCELES" << endl;
		if (a==c && a!=b)
			cout << "TRIANGULO ISOSCELES" << endl;
		if (b==c && b!=a)
			cout << "TRIANGULO ISOSCELES" << endl;
	}
	return 0;
}
