#include <iostream>
#include <cmath>
using namespace std;
int ChuSoLonNhat(int);

int main()
{
	int n;
	cout << "Nhap n : ";
	cin >> n;
	int kq = ChuSoLonNhat(n);
	cout << "Chu so lon nhat cua so nguyen duong n la : " << kq;
	return 0;
}

int ChuSoLonNhat(int n)
{
	n = abs(n);
	int lc = n % 10;
	int t = n;
	for (int t = n; t != 0; t = t / 10)
	{
		int dv = t % 10;
		if (dv > lc)
			lc = dv;
	}
	return lc;
}
