#include <iostream>
using namespace std;

int main() {

	int day, month;

	int days[12] {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25}; 

	while (cin >> month >> day) {
		if (month == 12 && day > 25)
			cout << "Ja passou!\n";

		else if (month == 12 && day == 25)
			cout << "E natal!\n";

		else if (month == 12 && day == 24)
			cout << "E vespera de natal!\n";

		else {
			int x = days[month - 1] - day;

			for (int i=month; i<12; i++)
				x += days[i];

			cout << "Faltam " << x << " dias para o natal!\n";
		}
	}
	return 0;
}
