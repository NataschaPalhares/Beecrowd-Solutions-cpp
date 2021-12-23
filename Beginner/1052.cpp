#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string num[13] = {" ", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    cout << num[n] << endl;
    return 0;
}
