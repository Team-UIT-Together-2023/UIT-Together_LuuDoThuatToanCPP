#include <iostream>
using namespace std;

void InputNX(int&, int&);
int Tong(int, int);

int main()
{
	cout << "Bai 071: Tinh S(x,n)." << endl;
	int n, x;
	InputNX(n, x);
	int tong = Tong(n, x);
	cout << "\nTong S(" << x << "," << n << ") la: " << tong << "." << endl;
	return 1206;
}

void InputNX(int& n, int& x)
{
	cout << "\nNhap gia tri so nguyen x: ";
	cin >> x;
	cout << "Nhap gia tri so nguyen n: ";
	cin >> n;
}
int Tong(int n, int x)
{
	int s = x;
	int t = x;
	for(int i = 3;i<=2*n+1;i=i+2)
	{
		t = t * x * x;
		s = s + t;
	}
	return s;
}