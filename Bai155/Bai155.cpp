#include <iostream>
using namespace std;

void InputN(int&);
void XuLy(int);

int main()
{
	cout << "Bai 155: Xuat gia tri a1, a2,... ai voi ai = 2^(i + 1)" << endl;
	int n;
	InputN(n);
	XuLy(n);
	return 1206;
}

void InputN(int& n)
{
	cout << "\nNhap gia tri nguyen duong n:";
	cin >> n;
}

void XuLy(int n)
{
	int a = 1;
	cout << endl;
	for (int i = 0; i <= n; i++)
	{
		a = a * 2;
		cout << "Gia tri a(" << i << ") = " << a << endl;
	}
}