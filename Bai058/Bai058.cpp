#include <iostream>
using namespace std;
int XuLy(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = XuLy(n);
	cout << "Tong cac chu so la: " << kq;
	return 1;
}

int XuLy(int n)
{
	int s = 0;
	for (int t = n; t != 0; t = t / 10)
	{
		int dv = t % 10;
		s = s + dv;
	}
	return s;
}

