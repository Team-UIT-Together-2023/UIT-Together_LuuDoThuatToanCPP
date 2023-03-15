#include<iostream>

using namespace std;

void XuLy(int&);

int main()
{
	int n;
	cin >> n;
	XuLy(n);
	return 0;
}
void XuLy(int& n)
{
	if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0))
		cout << "nam nhuan";
	else
		cout << "nam khong nhuan";
}