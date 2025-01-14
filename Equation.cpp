#include"Equation.h"

Equation::Equation() : equation_name("unknown"), b(0), c(0) {}

void Equation::setName(Mystring equation_name) {
	this->equation_name = equation_name;
}

Mystring Equation::getName() const {
	return equation_name;
}

Equation::~Equation() {
	cout << "Destructor called for " << equation_name << endl;
}
