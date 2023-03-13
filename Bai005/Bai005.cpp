#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float r;
	cout << "Bai 005: Nhap ban kinh cua hinh cau trong khong gian Oxyz. Tinh the tich cua hinh cau va xuat ket qua." << endl;
	cout << "\nNhap ban kinh r: ";
	cin >> r;
	float v = (float)(4 / 3) * M_PI * r * r * r;
	cout << "\nThe tich hinh cau la: " << v;
	return 1206;
}