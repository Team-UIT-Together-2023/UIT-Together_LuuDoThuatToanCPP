#include <iostream>
#include <cmath>
using namespace std;
float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float kq = Tong(n);
	cout << "Tong S(" << n << ") la: " << kq;
	return 1;
}

float Tong(int n)
{
	float s = 0;
	for (int i = 1; i <= n; i++)
		s = sqrt(i + s);
	return s;
}
