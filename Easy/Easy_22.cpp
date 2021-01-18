#include <iostream>
using namespace std;

int main() {
	int arr[100][100];
	int row, column, d1 = 0;

	std::cout << "*It'd be better if your matrix had as many rows as many columns*" << std::endl;
	std::cout << "Rows: ";
	std::cin >> row;

	std::cout << "Columns: ";
	std::cin >> column;

	//заполняем матрицу 
	for (int i = 0; i < column; i++) {
		for (int j = 0; j < row; j++) {
			std::cin >> arr[i][j];
		}
	}

	//выводим на экран
	std::cout << "Matrix looks ike this: " << std::endl;
	for (int i = 0; i < column; i++) {
		for (int j = 0; j < row; j++) {
			std::cout << arr[i][j];
			std::cout << " ";
		}
		std::cout << endl;
	}

	//ищем сумму диагонали (справа налево)
	for (int i = 0; i < column; i++) {
		for (int j = row - 1; j >= 0; j--) {
			d1 += arr[i][j];
			i++;
		}
	}

	std::cout << std::endl << d1 << std::endl;

	return 0;
}