#include <iostream>
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
	float s = 1 + x;
	float t = x;
	int m = 1;
	for (int i = 3; i <= 2 * n + 1; i = i + 2)
	{
		t = t * x * x;
		m = m * i * (i - 1);
		s = s + t / m;
	}
	return s;
}
