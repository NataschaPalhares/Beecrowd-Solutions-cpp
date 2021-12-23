#include <iostream>
using namespace std;

int main() {
    int cont;
    int i;
    float n;

    for (i=1; i<=6; i++) {
        cin >> n;
        if (n>0)
            cont++;
    }

    cout << cont << " valores positivos" << endl;
    return 0;
}
