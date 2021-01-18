#include <iostream>
using namespace std;

int main() {
	float z, b, a;
	float x = 0;
	float y = 0;
	float j = 0;
	float betta;

	cout << "Please, enter how many X you want: ";
	cin >> j;

	for (int i = 1; i <= j; i++) {
		cout << "Enter Z, B, A, Betta for X" << i << ":" << endl;
		cout << "Z = ";
		cin >> z;

		cout << "B = ";
		cin >> b;

		cout << "A = ";
		cin >> a;

		cout << "Betta = ";
		cin >> betta;

		x = pow(z, 3) - b + pow(a, 2) / pow(tan(betta), 2);
		y += x;
	}

	cout << "\ny = " << y << endl;

	return 0;
}