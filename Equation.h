#pragma once
#include"Mystring.h"

class Equation {
protected:
	Mystring equation_name;
	double b, c;
public:
	Equation();
	void setName(Mystring equation_name);
	Mystring getName() const;
	virtual void findRoots() = 0;
	virtual void display() const = 0;
	virtual ~Equation();
};