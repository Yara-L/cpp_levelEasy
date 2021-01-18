#include <iostream>
using namespace std;

int main() {
	int number;
	int left;

	cout << "Please enter number which is NOT > 99: ";
	cin >> number;

	if (number > 99) {
		cout << "Try again and enter number which is NOT > 99.";
	}
	else if(((number - (number % 10)) / 10) > number % 10){
		cout << (number - (number % 10)) / 10 << " is MORE" << endl;
		cout << number % 10 << " is LESS" << endl;
	}
	else if(((number - (number % 10))/10) < number % 10){
		cout << number % 10 << " is MORE" << endl;
		cout << (number - (number % 10)) / 10 << " is LESS" << endl;

	}

	return 0;
}