#include <iostream>
#include "stdafx.h"
#include <math.h>

using namespace std;

double second()
{
	double a, b, c, D;
	cout << "A= ";
	cin >> a;
	cout << "B= ";
	cin >> b;
	cout << "C= ";
	cin >> c;
	D = (pow(b, 2) - 4 * a * c);
	if (D > 0)
	{
		double x1 = (-b + sqrt(D)) / (2 * a);
		double x2 = (-b - sqrt(D)) / (2 * a);
		cout << "����� ����� " << x1 << " � " << x2;
	}
	else if (D == 0)
	{
		double x1 = (-b + sqrt(D)) / (2 * a);
		cout << "������ 1 � �����: " << x1;
	}
	else
		cout << "������ ��� " << endl;

	return 0;
}
