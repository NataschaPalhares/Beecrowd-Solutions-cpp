#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
	float a, b, c, media;
	cin >> a >> b >> c;
	if (0<=a && a<=10 && 0<=b && b<=10 && 0<=c && c<=10) {
	media = ((a * 2.0) + (b * 3.0) + (c * 5.0))/10;
	cout << fixed << setprecision(1);
	cout << "MEDIA" << " " << "=" << " " << media << endl;
	}
    return 0;
}
