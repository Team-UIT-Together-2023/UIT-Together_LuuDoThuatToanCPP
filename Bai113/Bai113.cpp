#include <iostream>
using namespace std;

void InputN(int&);
int SoHang(int);

int main()
{
	cout << "Bai 113: Tim so hang thu n cua day so." << endl;
	int n;
	InputN(n);
	int shn = SoHang(n);
	cout << "\nSo hang thu " << n << " cua day la: " << shn << "." << endl;
	return 1206;
}
void InputN(int& n)
{
	cout << "\nNhap gia tri so nguyen n: ";
	cin >> n;
}
int SoHang(int n)
{
	int ahh = 0;
	int at = 2;
	int i = 2;
	while (i <= n)
	{
		ahh = at + 2 * i + 1;
		i++;
		at = ahh;
	}
	return ahh;
}