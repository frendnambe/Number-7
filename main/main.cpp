// ConsoleApplication5.cpp: определяет точку входа для консольного приложения.
//
#include <iostream>
#include "stdafx.h"
int main()
{
	setlocale(LC_ALL, "Russian");
	int number;
	cout << "Выберите номер: " << endl;
	cout << "1.Уравнение первого порядка" << endl;
	cout << "2.Уравнение второго порядка" << endl;
	cin >> number;
	switch (number)
	{
	case 1: first();
		break;
	case 2: second();
		break;
	}



	return 0;
}



