#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int f1, f2;

  int dividendo, divisor;

  for (int i=0; i<n; i++) {
    cin >> f1 >> f2;

    if (f1 > f2) {
      dividendo = f1;
      divisor = f2;
    }
    else {
      divisor = f1;
      dividendo = f2;
    }

    while (dividendo % divisor != 0) {
      int aux = dividendo % divisor;
      dividendo = divisor;
      divisor = aux;
    }
    cout << divisor << endl;
  }

  return 0;
}
