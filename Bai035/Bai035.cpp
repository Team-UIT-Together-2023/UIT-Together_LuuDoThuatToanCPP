#include <iostream>
using namespace std;

void InputN(int&);
int Tich(int);

int main()
{
	cout << "Bai029: Tinh tich T(n) = 1 * 2 * 3 *...* (n-1) * n." << endl;
	int n; 
	InputN(n);
	int tich = Tich(n);
	cout << "\nTich T(" << n << ") la: " << tich << "." << endl;
	return 1206;
}

void InputN(int& n)
{
	cout << "\nNhap so nguyen duong n: ";
	cin >> n;
}
int Tich(int n)
{
	int t = 1;
	for (int i = 1; i <= n; i++)
		t = t * i;
	return t;
}