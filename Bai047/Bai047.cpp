#include <iostream>
#include <cmath>
using namespace std;

void InputN(int&);
double Tong(int);

int main()
{
	cout << "Bai 029: Tinh tong S(n)." << endl;
	int n;
	InputN(n);
	double tong = Tong(n);
	cout << "\nTong S(" << n << ") la: " << tong << "." << endl;
	return 1206;
}

void InputN(int& n)
{
	cout << "\nNhap so nguyen duong n: ";
	cin >> n;
}
double Tong(int n)
{
	double s = 0;
	for (int i = 1; i <= n; i++)
		s = s + (sqrt(1 + ((float)1 / (i * i)) + ((float)1 / ((i + 1) * (i + 1)))));
	return s;
}