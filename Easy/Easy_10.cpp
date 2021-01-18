#include <iostream>
#include <cmath>
#include <math.h>

int main() {
	const int pi = 3.141592;
	double x, y;
	double res = 0;

	std::cout << "(1 - tg x)^(ctg x) + cos(x - y): " << std::endl;
	
	std::cout << "Enter x: ";
	std::cin >> x;
	std::cout << "Enter y: ";
	std::cin >> y;

	x = x * pi / 180;
	y = y * pi / 180;

	res = pow(1 - tan(x), (cos(x) / sin(x))) + cos(x - y);

	std::cout << "Result: " << res << std::endl;

	return 0;
}