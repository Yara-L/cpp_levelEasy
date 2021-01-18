#include <iostream>
#include <cmath>

int main() {
	double arr[100];
	double sum = 0;
	int sz, cnt = 0;

	std::cout << "Enter array size: ";
	std::cin >> sz;

	for (int i = 0; i < sz; i++) {
		std::cin >> arr[i];
	}

	std::cout << std::endl;

	for (int i = 0; i < sz; i++) {
		sum += arr[i];
		cnt++;
	}
	sum /= cnt;

	std::cout << "Arifm: " << sum << std::endl;

	return 0;
}