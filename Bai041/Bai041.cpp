#include <iostream>
using namespace std;

void InputN(int&);
int Tong(int);

int main()
{
	cout << "Bai 041: Tinh tong S(n) = 1*2*3 + 2*3*4 +...+ n(n + 1)(n + 2)." << endl;
	int n;
	InputN(n);
	int tong = Tong(n);
	cout << "\nTong S(" << n << ") la: " << tong << "." << endl;
	return 1206;
}

void InputN(int& n)
{
	cout << "\nNhap so nguyen duong n: ";
	cin >> n;
}
int Tong(int n)
{
	int s = 0;
	for (int i = 1; i <= n; i++)
		s = s + i * (i + 1) * (i + 2);
	return s;
}