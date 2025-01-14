#include"Mystring.h"

Mystring::Mystring() : data(nullptr), length(0) {}

Mystring::Mystring(const char* str) {
	length = strlen(str);
	data = new char[length + 1];
	strcpy_s(data, length + 1, str);
}

Mystring::Mystring(const Mystring& other) {
	length = other.length;
	data = new char[length + 1];
	strcpy_s(data, length + 1, other.data);
}

Mystring& Mystring::operator=(const Mystring& other) {
	if (this == &other) {
		return *this;
	}
	delete[] data;
	length = other.length;
	data = new char[length + 1];
	strcpy_s(data, length + 1, other.data);
	return *this;
}

ostream& operator<<(ostream& os, const Mystring& str) {
	if (str.data) {
		os << str.data;
	}
	else {
		os << "(empty)";
	}
	return os;
}


Mystring::~Mystring() {
	delete[] data;
}

void Mystring::show() const {
	if (data) {
		cout << data;
	}
	else {
		cout << "(empty)";
	}
}
