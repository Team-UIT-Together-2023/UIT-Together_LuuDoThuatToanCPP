#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

void InputR(float&);
float TheTich(float);

int main()
{
	cout << "Bai 005: Nhap ban kinh cua hinh cau trong khong gian Oxyz. Tinh the tich cua hinh cau va xuat ket qua." << endl;
	float r;
	InputR(r);
	float thetich = TheTich(r);
	cout << "\nThe tich hinh cau la: " << thetich << "." << endl;
	return 1206;
}

void InputR(float& r)
{
	cout << "\nNhap ban kinh r: ";
	cin >> r;
}
float TheTich(float r)
{
	float v = (float)(4 / 3) * M_PI * r * r * r;
	return v;
}