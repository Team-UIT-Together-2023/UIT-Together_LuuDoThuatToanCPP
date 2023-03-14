#include <iostream>
#include <cmath>
using namespace std;

void InputX(int&);
double CosX(int);

int main()
{
	cout << "Bai 107: Tinh cos(x) voi do chinh xac 10^-6." << endl;
	int x;
	InputX(x);
	float cosx = CosX(x);
	cout << "\nGia tri cos(x) la: " << cosx << "." << endl;
	return 1206;
}

void InputX(int& x)
{
	cout << "\nNhap gia tri so nguyen x: ";
	cin >> x;
}
double CosX(int x)
{
	float cosx = 0;
	float e = 1;
	float t = 1;
	float m = 1;
	float i = 2;
	int dau = -1;
	while (e >= pow(10, -6))
	{
		t = t * x * x;
		m = m * (i - 1) * i;
		e = dau * (t / m);
		cosx = cosx + e;
		i = i + 2;
		dau = -dau;
	}
	return cosx;
}