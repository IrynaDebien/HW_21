#pragma once
#include"Mystring.h"
#include"Equation.h"
class QuadraticEquation : public Equation {
private:
	double a;
public:
	QuadraticEquation(double A, double B, double C);
	void findRoots() override;
	void display() const override;
	~QuadraticEquation();
};