#include<iostream>
using namespace std;
#include<math.h>
#include<cmath>
int BCNN(int, int);
int main()
{
	int m;
	cout << "Nhap m = ";
	cin >> m;
	int n;
	cout << "Nhap n = ";
	cin >> n;

	cout << "Boi chung nho nhat cua hai so " << m << " va " << n << " la " << BCNN(m, n) << endl;
	return 0;
}
int BCNN(int m, int n)
{
	int a = abs(m);
	int b = abs(n);
	while (a * b != 0)
	{
		if (a > b)
		{
			a = a - b;
		}
		else
			b = b - a;
	}
	float kq = (float)(m * n) / (a + b);
	return kq;
}