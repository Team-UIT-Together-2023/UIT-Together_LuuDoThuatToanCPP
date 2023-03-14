#include <iostream>
using namespace std;

void InputAB(double&, double&);
void XuLy(double, double);

int main()
{
	cout << "Nhap vao 2 gia tri thuc a va b. Thay cac gia tri am bang tri tuyet doi cua no va xuat ket qua." << endl;
	double a, b;
	InputAB(a, b);
	XuLy(a, b);
	return 1206;
}
void InputAB(double& a, double& b)
{
	cout << "\nNhap gia tri thuc a: ";
	cin >> a;
	cout << "Nhap gia tri thuc b: ";
	cin >> b;
}
void XuLy(double a, double b)
{
	if (a < 0)
		a = -a;
	if (b < 0)
		b = -b;
	cout << "\nGia tri tuyet doi cua a la: " << a << ".";
	cout << "Gia tri tuyet doi cua b la: " << b << "." << endl;
}