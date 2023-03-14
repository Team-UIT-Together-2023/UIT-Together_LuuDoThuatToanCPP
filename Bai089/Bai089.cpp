#include <iostream>
using namespace std;

void InputNX(int&, int&);
double Tong(int, int);

int main()
{
	cout << "Bai 089: Tinh tong S(x,n)." << endl;
	int n, x;
	InputNX(n, x);
	double tong = Tong(n, x);
	cout << "\nTong S(" << x << "," << n << ") la: " << tong << "." << endl;
	return 1206;
}

void InputNX(int& n, int& x)
{
	cout << "\nNhap gia tri so nguyen n: ";
	cin >> n;
	cout << "Nhap gia tri so nguyen x: ";
	cin >> x;
}
double Tong(int n, int x)
{
	float s = 0;
	float t = -x;
	float m = 1;
	int dau = -1;
	for (int i = 1; i <= n; i++)
	{
		s = s + dau * (t / m);
		t = t * (-x);
		m = m + i + 1;
		dau = -dau;
	}
	return s;
}