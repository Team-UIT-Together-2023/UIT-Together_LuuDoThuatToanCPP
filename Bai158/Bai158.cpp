#include <iostream>
using namespace std;

int max(int);
int SLmax(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = SLmax(n);
	cout << "So luong chu so lon nhat la: " << SLmax(n);
	return 1;
}

int max(int n)
{
	int temp = n;
	int max = temp % 10;
	while (temp != 0)
	{
		int  dv = temp % 10;
		if (dv > max)
			max = dv;
		temp = temp / 10;
	}
	return max;
}

int SLmax(int n)
{
	int dem = 0;
	int temp = n;
	while (temp != 0)
	{
		int dv = temp % 10;
		if (dv == max(n))
			dem++;
		temp = temp / 10;
	}
	return dem;
}