#include <iostream>
using namespace std;
int main()
{
	float x, y, z;
	cout << "Nhap x = ";
	cin >> x;
	cout << "Nhap y = ";
	cin >> y;
	cout << "Nhap z = ";
	cin >> z;
	if ((x + y > z) && (y + z > x) && (z + x > y))
	{
		if ((x == y) && (y == z))
			cout << "La tam giac deu";
		else if (x * x == y * y + z * x || y * y == x * x + z * z || z * z == y * y + x * x)
		{
			if (x == y || y == z || z == x)
				cout << "La tam giac vuong can";
			else
				cout << "La tam giac vuong";
		}
		else if (x == y || y == z || z == x)
			cout << "La tam giac can";
		else
			cout << "la tam giac thuong";
	}
	else
		cout << "Khong la tam giac";
	return 0;
}

