
#include "pch.h"
#include <iostream>
#include <locale.h>
#include "nasledovanie.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	ClassA object_A(3);
	cout << "значение object_A = ";
	object_A.show_value();

	ClassB object_B(4);
	cout << "значение object_B = ";
	object_B.show_value();

	object_B.ValueSqr();
	cout << "квадрат значения object_B = ";
	object_B.show_value();

	cout << endl;

	return 0;
}