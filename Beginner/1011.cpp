#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double radius, volume, pi;
	cin >> radius;
	pi = 3.14159;
	volume = ((4.0/3) * pi * radius * radius * radius);
	cout << "VOLUME" << " " << "=" << " ";
	cout << fixed << setprecision(3) << volume << endl;
	return 0;
}
