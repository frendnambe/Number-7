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
		cout << "Корни равны " << x1 << " и " << x2;
	}
	else if (D == 0)
	{
		double x1 = (-b + sqrt(D)) / (2 * a);
		cout << "Корень 1 и равен: " << x1;
	}
	else
		cout << "Корней нет " << endl;

	return 0;
}
