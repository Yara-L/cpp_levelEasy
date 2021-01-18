#include <iostream>
using namespace std;

int main() {
	int num;

	cout << "1. Monday\n";
	cout << "2. Tuesday\n";
	cout << "3. Wednesday\n";
	cout << "4. Thursday\n";
	cout << "5. Friday\n";
	cout << "6. Saturday\n";
	cout << "7. Sunday\n";
	
	cout << "\nChoose any: ";
	cin >> num;

	switch (num)
	{
	case 1:
		cout << "\nMonday\n";
		break;	 
	case 2: 	 
		cout << "\nTuesday\n";
		break;	 
	case 3:		 
		cout << "\nWednesday\n";
		break;	 
	case 4: 	 
		cout << "\nThursday\n";
		break;	 
	case 5:		 
		cout << "\nFriday\n";
		break;	 
	case 6:		 
		cout << "\nSaturday\n";
		break;	 
	case 7:		 
		cout << "\nSunday\n";
		break;
	default:
		cout << "\nPlease choose any of these numbers. Try again.\n";
		break;
	}

	return 0;
}