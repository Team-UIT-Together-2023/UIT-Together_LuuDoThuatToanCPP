#include<iostream>
#include<cmath>

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
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = 0;
		t = t / 10;
	}
	if (flag == 1)
		cout << "Toan le";
	else
		cout << "khong toan le";
}