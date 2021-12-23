#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    float n;
    float new_salary;
    int per;
    cin >> n;
    
    if (n<=400) {
        new_salary = n + (0.15*n);
        per = 15;
    }
    else if (n>= 400.01 && n<=800) {
        new_salary = n + (0.12*n);
        per = 12;
    }
    else if (n>=800.01 && n<=1200) {
        new_salary = n + (0.1*n);
        per = 10;
    }
    else if (n>=1200.01 && n<=2000) {
        new_salary = n + (0.07*n);
        per = 7;
    }
    else {
        new_salary = n + (0.04*n);
        per = 4;
    }
    
    cout << fixed << setprecision(2);
    cout << "Novo salario: " << new_salary << endl;
    cout << "Reajuste ganho: " << new_salary - n << endl;
    cout << fixed << setprecision(0);
    cout << "Em percentual: " << per << " %" << endl;
 
    return 0;
}
