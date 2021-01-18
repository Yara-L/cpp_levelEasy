#include <iostream>
using namespace std;

int main() {
	int n, k;
	int sum = 0;

	cout << "Enter N: ";
	cin >> n;

	cout << "Enter k: ";
	cin >> k;

	for (int i = 1; i <= n; i++) {
		sum += pow(i, k);
	}

	cout << "Sum: " << sum << endl;

	return 0;
}