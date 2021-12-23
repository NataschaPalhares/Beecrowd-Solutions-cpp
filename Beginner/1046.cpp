#include <iostream>
using namespace std;

int main() {
    int s, e;
    cin >> s >> e;

    if (s>e)
        cout << "O JOGO DUROU " << (24 - s) + e << " HORA(S)\n";
    else if (e>s)
        cout << "O JOGO DUROU " << e - s << " HORA(S)\n";
    else
        cout << "O JOGO DUROU 24 HORA(S)\n";
    return 0;
}
