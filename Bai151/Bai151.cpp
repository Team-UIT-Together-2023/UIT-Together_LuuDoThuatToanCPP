#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	int flag = 1;
	int t = n;
	while (t > 1)
	{
		int du = t % 2;
		if (du != 0)
			flag = 0;
		t = t / 2;
	}
	if (flag == 1)
		cout << n << " la dang 2^m";
	else
		cout << n << " khong la dang 2^m";
	return 0;
}