#include"QuadraticEquation.h"

QuadraticEquation::QuadraticEquation(double A, double B, double C) {
	a = A;
	b = B;
	c = C;
	setName("Quadratic Equation");
}

void QuadraticEquation::findRoots() {
	double D = b * b - 4 * a * c;
	if (D > 0) {
		double x1 = (-b + sqrt(D)) / (2 * a);
		double x2 = (-b - sqrt(D)) / (2 * a);
		cout << "Roots of the quadratic equation: x1 = " << x1 << ", x2 = " << x2 << endl;
	}
	else if (D == 0) {
		double x = -b / (2 * a);
		cout << "Root of the quadratic equation: x = " << x << endl;
	}
	else {
		cout << "The equation has no real roots." << endl;
	}
}

void QuadraticEquation::display() const {
	cout << "Quadratic equation: " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
}

QuadraticEquation::~QuadraticEquation() {
	cout << "Destructor called for quadratic equation." << endl;
}
