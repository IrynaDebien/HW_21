#pragma once
#include <windows.h>
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

class Mystring {
private:
	char* data;
	size_t length;

public:
	Mystring();
	Mystring(const char* str);
	Mystring(const Mystring& other);
	Mystring& operator=(const Mystring& other);
	friend ostream& operator<<(ostream& os, const Mystring& str);
	~Mystring();
	void show() const;
};