#include <iostream>
#include <iomanip>
#include <string> 
using namespace std;
 
int main() {
    double area, raio, pi;
    cin >> raio;
    pi = 3.14159;
    area = pi * (raio * raio);
    cout << "A" << "=" << fixed << setprecision(4) << area << endl;
    return 0;
}
