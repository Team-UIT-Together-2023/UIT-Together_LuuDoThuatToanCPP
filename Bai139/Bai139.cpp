#include <iostream>
using namespace std;
int main()
{
	float a, b;
	cout << "Nhap a = ";
	cin >> a;
	cout << "Nhap b = ";
	cin >> b;
	float x = 0;
	if (a == 0)
	{
		if (b == 0)
			cout << "Phuong trinh vo so nghiem";
		else
			cout << "Phuong trinh vo nghiem";
	}
	else
	{
		x = -b / a;
		cout << "Nghiem cua phuong trinh la: " << x;
	}
	return 0;
}
