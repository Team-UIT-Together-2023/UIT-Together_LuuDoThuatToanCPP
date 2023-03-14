#include<iostream>
using namespace std;
#include<math.h>
#include<cmath>
#include<stdlib.h>
float F_(float);
int main()
{
	float x;
	cout << "Nhap x = ";
	cin >> x;

	cout << "f(" << x << ")= " << F_(x) << endl;
	return 0;
}
float F_(float x)
{
	double f;
	if (x > 1)
	{
		f = 2 * pow(x, 3) + 5 * pow(x, 2) - (8 * x) + 3;
	}
	else if (x < 0)
	{
		f = (-2) * pow(x, 3) + (6 * x) + 9;
	}
	else
	{
		f = 5 * x - 7;
	}
	return f;
}