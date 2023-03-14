#include <iostream>
#include <cmath>
using namespace std;

void InputNX(int&, int&);
double Tong(int, int);

int main()
{
	
	cout << "Bai 083: Tinh tong S(x,n)." << endl;
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
	double s = 0;
	double v = 1;
	for (int i = 1; i <= n; i++)
	{
		v = v * x;
		s = s + sin(v);
	}
	return s;
}