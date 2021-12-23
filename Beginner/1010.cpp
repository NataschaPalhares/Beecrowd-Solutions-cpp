#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
	int a, b, c, d;
	float e, f, valor;
	cin >> a >> b >> e >> c >> d >> f;
	valor = ((b * e) + (d * f));
	cout << "VALOR A PAGAR:" << " " << "R$" << " ";
	cout << fixed << setprecision(2) << valor << endl;
	return 0;

}
