#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float&);
float Xuly(float);

int main()
{
	float r;
	Nhap(r);
	float s = Xuly(r);
	cout << "Dien tich xung quanh hinh cau la: " << s;
	return 1;
}

void Nhap(float& r)
{
	cout << "Nhap ban kinh: ";
	cin >> r;
}
float Xuly(float r)
{
	return 4 * 3.14 * r * r;
}
