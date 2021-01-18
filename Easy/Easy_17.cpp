#include <iostream>

int main() {
	int k;
	char nums[100];

	std::cout << "Enter line of numbers: ";
	std::cin >> nums;

	std::cout << "Enter the number of chosen number in the line above: ";
	std::cin >> k;

	if ((k - 1) < 0 || k > strlen(nums)) {
		std::cout << "Error. Try again." << std::endl;
	}
	else {
		std::cout << "Position: " << nums[k - 1] << std::endl;
	}

	return 0;
}