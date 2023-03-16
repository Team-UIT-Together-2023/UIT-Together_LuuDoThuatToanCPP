#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a, b, c;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	float d = b * b - 4 * a * c;
	if (d <= 0)
	{
		if (d == 0)
		{
			float x0 = -b / (2 * a);
			cout << "Gia tri cua x0 la: " << x0;
		}
		else
			cout << "Vo nghiem";
	}
	else
	{
		float x1 = (-b + sqrt(d)) / (2 * a);
		float x2 = (-b - sqrt(d)) / (2 * a);
		cout << x1 << x2;
	}
	return 0;
}