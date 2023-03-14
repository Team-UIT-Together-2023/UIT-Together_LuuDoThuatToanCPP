#include <iostream>
using namespace std;

void InputX(int&);
int XuLy(int);

int main()
{
	cout << "Bai 017: Tinh gia tri x^11 voi so luong phep nhan toi thieu." << endl;
	int x;
	InputX(x);
	int x11 = XuLy(x);
	cout << "\nGia tri x^11 la: " << x11 << "." << endl;
	return 1206;
}

void InputX(int& x)
{
	cout << "\nNhap so nguyen duong x: ";
	cin >> x;
}
int XuLy(int x)
{
	int x2 = x * x;
	int x3 = x2 * x;
	int x6 = x3 * x3;
	int x9 = x6 * x3;
	int x11 = x9 * x2;
	return x11;
}