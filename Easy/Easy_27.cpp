#include <iostream>
using namespace std;

int main() {
	int num, res;

	cout << "Number: ";
	cin >> num;

	for (int i = 1; i <= 10; i++) {
		cout << i << " * " << num << " = "<< num * i << endl;
	}

	cout << endl;

	return 0;
}