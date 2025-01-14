#include"QuadraticEquation.h"
#include"LinearEquation.h"
#include"Equation.h"
#include"Mystring.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Тема: Абстрактний клас і віртуальний деструктор 
	//Завдання №1
		//Створити абстрактний базовий клас з віртуальною функцією — корені рівняння.
		// Створити похідні класи : клас лінійних рівнянь і клас квадратних рівнянь.
		// Визна чити функцію обчислення коренів рівнянь.

	int choice;
	while (true) {

		cout << "Choose the type of equation to solve:" << endl;
		cout << "1. Linear equation" << endl;
		cout << "2. Quadratic equation" << endl;
		cout << "3. Exit" << endl;
		cout << "Your choice: ";
		cin >> choice;

		if (choice == 1) {
			double b, c;
			cout << "Enter the coefficients b and c for the linear equation (in the form bx + c = 0):" << endl;
			cout << "b: ";
			cin >> b;
			cout << "c: ";
			cin >> c;
			LinearEquation linear_equation(b, c);
			linear_equation.display();
			linear_equation.findRoots();
		}
		else if (choice == 2) {
			double a, b, c;
			cout << "Enter the coefficients a, b and c for the quadratic equation (in the form ax^2 + bx + c = 0):" << endl;
			cout << "a: ";
			cin >> a;
			cout << "b: ";
			cin >> b;
			cout << "c: ";
			cin >> c;
			QuadraticEquation quadratic_equation(a, b, c);
			quadratic_equation.display();
			quadratic_equation.findRoots();
		}
		else if (choice == 3) {
			cout << "Exiting the program." << endl;
			break;
		}
		else {
			cout << "Invalid choice. Please try again." << endl;
		}
	}

	return 0;
}
