#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
	double a, b, media;
	cin >> a >> b;
	if (0 <= a && a <= 10 && 0 <= b && b <= 10) {
	media = ((3.5 * a) + (7.5 * b))/11;
	cout << fixed << setprecision(5);
	cout << "MEDIA" << " " << "=" << " " << media << endl;
    }
    return 0;
}
