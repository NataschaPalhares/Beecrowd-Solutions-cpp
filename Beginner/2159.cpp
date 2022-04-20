#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  int n;
  cin >> n;

  double p = (n / log(n));

  double m = (1.25506 * (n / log(n)));

  cout << fixed << setprecision(1) << p << " ";
  cout << fixed << setprecision(1) << m << endl;

  return 0;
}
