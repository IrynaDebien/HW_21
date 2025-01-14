#include"LinearEquation.h"

LinearEquation::LinearEquation(double B, double C) {
	b = B;
	c = C;
	setName("Linear Equation");
}

void LinearEquation::findRoots() {
	if (b != 0) {
		double x = -c / b;
		cout << "Root of the linear equation: x = " << x << endl;
	}
	else {
		cout << "The equation has no roots." << endl;
	}
}

void LinearEquation::display() const {
	cout << "Linear equation: " << b << "x + " << c << " = 0" << endl;
}

LinearEquation::~LinearEquation() {
	cout << "Destructor called for linear equation." << endl;
}
