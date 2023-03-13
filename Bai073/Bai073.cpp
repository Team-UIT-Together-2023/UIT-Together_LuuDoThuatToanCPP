#include <iostream>
using namespace std;
int main()
{
	int x, n;
	cout << "Nhap x = ";
	cin >> x;
	cout << "Nhap n = ";
	cin >> n;;
	float s = 0;
	int t = 1;
	int i = 1;
	int m = 0;
	while (i <= n)
	{
		t = t * x;
		m = m + i;
		s = s + (float)t / m;
		i = i + 1;
	}
	cout << "S(" << x << "," << n << ") = " << s;
	return 0;
}