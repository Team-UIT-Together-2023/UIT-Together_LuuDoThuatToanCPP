#include <iostream>
#include <cmath>
using namespace std;
void Xuly(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	Xuly(n);
	return 1;
}
void Xuly(int n)
{
	int flag = 1;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			flag = 0;
		t = t / 10;
	}
	if (flag == 1)
		cout << n << " co toan chu so chan";
	else
		cout << n << " khong toan chu so chan";
}
