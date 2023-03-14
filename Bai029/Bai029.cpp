#include <iostream>
using namespace std;

void InputN(int&);
float Tong(int);

int main()
{
	cout << "Bai 029: Tinh tong S(n) = 1 + 1/2 + 1/3 +...+ 1/(n-1) + 1/n." << endl;
	int n;
	InputN(n);
	float tong = Tong(n);	
	cout << "\nTong S(" << n << ") la: " << tong << "." << endl;
	return 1206;
}

void InputN(int& n)
{
	cout << "\nNhap so nguyen duong n: ";
	cin >> n;
}
float Tong(int n)
{
	float s = 0;
	for (int i = 1; i <= n; i++)
		s = s + (float)1 / i;
	return s;
}