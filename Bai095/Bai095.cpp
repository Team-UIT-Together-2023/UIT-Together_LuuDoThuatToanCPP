#include <iostream>
#include <cmath>
using namespace std;

void InputN(int&);
double Tong(int);

int main()
{
	cout << "Bai 095: Tinh tong S(n)." << endl;
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
	for (int i = n; i >= 1; i--)
		s = sqrt(i + s);
	return s;
}