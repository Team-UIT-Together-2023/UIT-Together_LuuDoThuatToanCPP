#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float&, int&);
float Xuly(float, int);

int main()
{
	float x;
	int n;
	Nhap(x, n);
	float kq = Xuly(x, n);
	cout << "Tong S(" << x << "," << n << ") la: " << kq;
	return 0;
}
void Nhap(float& x, int& n)
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
}
float Xuly(float x, int n)
{
	float s = 0;
	float t = 1;
	for (int i = 1; i <= n; i++)
	{
		t = t * sin(x);
		s = s + t;
	}
	return s;
}
