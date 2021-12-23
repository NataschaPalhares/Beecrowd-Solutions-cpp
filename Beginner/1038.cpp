#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int x, y;
	double preco;
	cin >> x >> y;

	if (x == 1)
		preco = 4.00;
	if (x == 2)
		preco = 4.50;
	if (x == 3)
		preco = 5.00;
	if (x == 4)
		preco = 2.00;
	if (x == 5)
		preco = 1.50;

	cout << fixed << setprecision(2);
	cout << "Total: R$ " << (y * preco) << endl;

	return 0;
}
