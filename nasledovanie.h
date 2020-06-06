#pragma once
#include "nasledovanie.cpp"

class ClassA {
protected:
	int value;
public:
	ClassA(int input) {
		value = input;
	}
	void show_value() {
		cout << value << endl;
	}
};

class ClassB :public ClassA {
public:
	ClassB(int inputS) :ClassA(inputS) {

	}
	void ValueSqr() {
		value *= value;
	}
};