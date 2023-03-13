#include <iostream>
using namespace std;
int main()
{
	int x, n;
	cout << "Nhap x = ";
	cin >> x;
	cout << "Nhap n = ";
	cin >> n;;
	float s = 1;
	int t = 1;
	int i = 2;
	int m = 1;
	int dau = 1;
	while (i <= 2 * n)
	{
		t = t * x * x;
		m = m * (i - 1) * i;
		s = s + (float)dau * t / m;
		i = i + 2;
		dau = -dau;
	}
	cout << "S(" << x << "," << n << ") = " << s;
	return 0;
}