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
	int flag = 1;
	int t = n;
	for (int i = 1; t > 1; t /= 5)
	{
		int du = t % 5;
		if (du != 0)
			flag = 0;
	}
	if (flag == 1)
		cout << "co dang 5^m";
	else
		cout << "khong co dang 5^m";
}