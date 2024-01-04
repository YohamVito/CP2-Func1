/*
Accepts 2 value and has a choice from MDAS.
The User of the system sometimes make mistake make sure only accept values stated on main menu.
The owner also want to make the system loop so it can solve problems without reopening the system.
*/

#include <iostream>

int mainmenu() {
	int choice;
	std::cout
		<< "--- Please Select for Math Solution to use ---\n"
		<< "1. Add\n"
		<< "2. Subtract\n"
		<< "3. Multiplication\n"
		<< "4. Division\n"
		<< "\n"
		<< "Enter Choice: ";
	std::cin >> choice;
	return choice;
}

int addition() {
	int val1, val2;
	std::cout << "Please input value 1: ";
	std::cin >> val1;
	std::cout << "Please input value 2: ";
	std::cin >> val2;
	std::cout << val1 << " + " << val2 << " = " << val1 + val2 << "\n";
	return 0;
}

int subtraction() {
	int val1, val2;
	std::cout << "Please input value 1: ";
	std::cin >> val1;
	std::cout << "Please input value 2: ";
	std::cin >> val2;
	std::cout << val1 << " - " << val2 << " = " << val1 - val2 << "\n";
	return 0;
}

int multiplication() {
	int val1, val2;
	std::cout << "Please input value 1: ";
	std::cin >> val1;
	std::cout << "Please input value 2: ";
	std::cin >> val2;
	std::cout << val1 << " * " << val2 << " = " << val1 * val2 << "\n";
	return 0;
}

int division() {
	int val1, val2;
	std::cout << "Please input value 1: ";
	std::cin >> val1;
	std::cout << "Please input value 2: ";
	std::cin >> val2;
	if (val2 != 0) {
		std::cout << val1 << " / " << val2 << " = " << static_cast<double>(val1) / val2 << "\n";
	}
	else {
		std::cout << "Cannot divide by zero.\n";
	}
	return 0;
}

int main() {
	char continueChoice = 'y';

	do {
		int choice;

		do {
			choice = mainmenu();
			system("cls");

			switch (choice) {
			case 1:
				addition();
				break;
			case 2:
				subtraction();
				break;
			case 3:
				multiplication();
				break;
			case 4:
				division();
				break;
			default:
				std::cout << "User Input Incorrect\n\n";
				break;
			}
		} while (choice < 1 || choice > 4);

		std::cout << "Do you want to Continue [y/n]: ";
		std::cin >> continueChoice;
		system("cls");

	} while (continueChoice == 'y');

	return 0;
}
