#include <iostream>

int main() {
	double length1, length2, width1, width2;

	std::cout << "Enter the length of the brick: ";
	std::cin >> length1;
	std::cout << "and width: ";
	std::cin >> width1;

	std::cout << "Enter the length of the oppening: ";
	std::cin >> length2;
	std::cout << "and width: ";
	std::cin >> width2;

	if (length1 <= length2 || width1 <= width2) {
		std::cout << "Brick went into the hole by the first party" << std::endl;
	}
	else {
		std::cout << "Nope, not going to fit :(" << std::endl;
	}

	return 0;
}