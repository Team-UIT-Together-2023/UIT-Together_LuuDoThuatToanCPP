#include <iostream>
using namespace std;
void Nhap(float&, float&, float&);
void Xuly(float&, float&, float&);

int main()
{
	float x, y, z;
	Nhap(x, y, z);
	Xuly(x, y, z);
	return 1;

}

void Nhap(float& x, float& y, float& z)
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Nhap z: ";
	cin >> z;
}

void Xuly(float& x, float& y, float& z)
{
	if (x + y > z && x + z > y && y + z > x)
		cout << "La tam giac ";
	else
		cout << "Khong la tam giac ";
}