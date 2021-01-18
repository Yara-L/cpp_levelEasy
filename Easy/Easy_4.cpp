#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double v, t;
	double g = 9.8;

	cout << "V = ";
	cin >> v;

	cout << "t = ";
	cin >> t;

	cout << "Ugol = " << (asin((g * t) / (2 * v))) * (180/3.14) << endl;

	return 0;
}