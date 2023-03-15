#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int first = n;
	while (first >= 10)
	{
		first = first / 10;
	}
	int dem = 0;
	int t = n;
	int dv = t % 10;
	while (t != 0)
	{
		dv = t % 10;
		if (dv == first)
			dem++;
		t = t / 10;
	}
	cout << "So luong chu so dau tien la: " << dem;
	return 1;
}