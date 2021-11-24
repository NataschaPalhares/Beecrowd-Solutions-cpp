#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdio>
using namespace std;

string sinal(char *str)
{
    string ret = (string)str;
    if (ret[0] != '-') ret = "+" + ret;
    return ret;
}

int main()
{
    long double s;
    char str[16];
    cin >> s;

    sprintf(str, "%.4LE", s);
       
    cout << sinal(str) << '\n';

}