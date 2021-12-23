#include <iostream>
using namespace std;

int main() {
	int age_days, year, month, day;
	cin >> age_days;
	year = age_days/365;
	month = ((age_days - (year*365))/30);
	day = (age_days - (month*30) - (year*365));
	cout << year << " ano(s)" << endl;
	cout << month << " mes(es)" << endl;
	cout << day << " dia(s)" << endl;
	return 0;
}
