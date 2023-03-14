#include <iostream>
#include <cmath>
using namespace std;

void InputNK(int&, int&);
int Tong(int, int);

int main()
{
	
	cout << "Bai 077: Tinh S (n, k)." << endl; 
	int n, k;
	InputNK(n, k);
	int tong = Tong(n, k);
	cout << "\nTong S(" << n << "," << k << ") la: " << tong << "." << endl;
	return 1206;
}

void InputNK(int& n, int& k)
{
	cout << "\nNhap gia tri so nguyen n: ";
	cin >> n;
	cout << "Nhap gia tri so nguyen k: ";
	cin >> k;
}
int Tong(int n, int k)
{
	int s = 0;
	for (int i = 1; i <= n; i++)
		s = s + pow(i, k);
	return s;
}