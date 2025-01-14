#pragma once
#include"Mystring.h"
#include"Equation.h"

class LinearEquation : public Equation {
public:
	LinearEquation(double B, double C);
	void findRoots() override;
	void display() const override;
	~LinearEquation();
};