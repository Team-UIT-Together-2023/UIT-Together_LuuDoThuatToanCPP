#include <iostream>
using namespace std;

void InputAB(int&, int&);
int ucln(int, int);

int main()
{
	cout << "Bai 149: Tim uoc chung lon nhat cua 2 so nguyen a va b." << endl;
	int a, b, gcd;
	InputAB(a, b);
	gcd = ucln(a, b);
	cout << "\nUoc chung lon nhat cua 2 so a va b la: " << gcd << "." << endl;
	return 1206;
}

void InputAB(int& a, int& b)
{
	cout << "\nNhap gia tri nguyen duong a: ";
	cin >> a;
	cout << "Nhap gia tri nguyen duong b: ";
	cin >> b;
}

int ucln(int a, int b)
{
	int m = abs(a);
	int n = abs(b);
	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	return m + n;
}