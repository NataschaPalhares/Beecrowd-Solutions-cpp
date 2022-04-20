#include <iostream>
#include <cstring>
using namespace std;

int main() {
  char text[502];

  cin.getline(text, 502, '\n');

  if (strlen(text) > 80)
    cout << "NO\n";
  else
    cout << "YES\n";

  return 0;
}
