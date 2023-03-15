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
	int t = 1;
	for (int i = 1; i <= n; i++)
	{
		t = t * i;
		s = pow(t + s, (float)1 / (i + 1));
	}
	return s;
}
