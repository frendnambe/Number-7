#include "stdafx.h"
double first()
{
	double a, b;
	cout << "A= ";
	cin >> a;
	cout << "B= ";
	cin >> b;
	if (a != 0)
	{
		cout << "Корень равен: " << b / a;
	}
	else
	{
		cout << " Корней нет" <<endl;
	}
	return 0;
}
