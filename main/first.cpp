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
		cout << "������ �����: " << b / a;
	}
	else
	{
		cout << " ������ ���" <<endl;
	}
	return 0;
}
