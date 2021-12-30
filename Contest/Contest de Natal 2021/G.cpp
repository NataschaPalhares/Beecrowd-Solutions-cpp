#include <iostream>
using namespace std;

struct Natal {
	char name[20];
	char gift[30];
	int dis;
};

int main() {
	int n;
	cin >> n;

	Natal v[n];

	for (int i=0; i<n; i++)
		cin >> v[i].name >> v[i].gift >> v[i].dis;

	for (int j=0; j<n-1; j++)
		for (int i=0; i<n-1; i++)
			if (v[i].dis > v[i+1].dis) {
				Natal aux = v[i];
				v[i] = v[i+1];
				v[i+1] = aux;
			}

	for (int i=0; i<n; i++)
		cout << v[i].name << " " << v[i].gift << " " << v[i].dis << endl;

	return 0; 
}
