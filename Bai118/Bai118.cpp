#include <iostream>
#include <cmath>
using namespace std;
float Tinhsohang(int);

int main()
{
	int n;
	cout << "Nhap gia tri n: ";
	cin >> n;
	float kq = Tinhsohang(n);
	cout << "So hang thu " << n << " la: " << kq;
	return 1;
}

float Tinhsohang(int n)
{
	float ahh = 0;
	float at = 2;
	for (int i = 2; i <= n; i++)
	{
		ahh = (-9 * at - 24) / (5 * at + 13);
		at = ahh;
	}
	return ahh;
}
