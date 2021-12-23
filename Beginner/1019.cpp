#include <iostream>
using namespace std;

int main() {
	int s, m, h, seconds;
	cin >> s;
	h = (s/3600);
	s = (s - (h*3600));
	m = (s/60);
	seconds = (s - (60*m));
	cout << h << ":" << m << ":" << seconds << endl;
	return 0;
}
