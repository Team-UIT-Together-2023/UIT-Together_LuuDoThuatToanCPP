#include <iostream>
using namespace std;
float Xuly(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float kq = Xuly(n);
	cout << "Tong S(" << n << ") la: " << kq;
	return 0;
}

float Xuly(int n)
{
	float s = 0;
	float m = 0;
	int dau = 1;
	for (int i = 1; i <= n; i = i + 1)
	{
		m = m + i;
		s = s + dau * ((float)1 / m);
		dau = -dau;
	}
	return s;

}
