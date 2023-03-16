#include <iostream>
using namespace std;
int main()
{
	int n, x;
	cout << "Nhap n, x: ";
	cin >> n >> x;
	float s = 1 - x;
	int t = x;
	int m = 1;
	int i = 3;
	int dau = 1;
	while (i <= 2 * n + 1)
	{
		t = t * x * x;
		m = m * i * (i - 1);
		s = s + dau * (float)(t / m);
		i = i + 2;
		dau = -dau;
	}
	cout << s;
	return 0;
}