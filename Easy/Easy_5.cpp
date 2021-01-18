#include <iostream>
using namespace std;

int main() {
	int num, pow, res;

	cout << "Number: ";
	cin >> num;

	cout << "Power: ";
	cin >> pow;

	for (int i = 1; i < pow; i++) {
		num *= 2;
	}

	cout << "Number: " << num << endl;

	return 0;
}