#include <iostream>
using namespace std;

void InputN(int&);
double SoHang(int);

int main()
{
	int n;
	InputN(n);
	double shn = SoHang(n);
	cout << "\nSo hang thu " << n << " cua day la: " << shn << "." << endl;
	return 1206;
}
void InputN(int& n)
{
	cout << "\nNhap gia tri so nguyen n: ";
	cin >> n;
}
double SoHang(int n)
{
	double ahh = 0;
	double at = 2;
	for (int i = 2; i <= n; i++)
	{
		ahh = (at * at + 2) / (2 * at);
		at = ahh;
	}
	return ahh;
}