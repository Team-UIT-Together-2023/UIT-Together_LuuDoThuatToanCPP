#include <iostream>
#include <cmath>
#define M_PI 3.14
using namespace std;
int main()
{
	float r;
	cout << "Nhap ban kinh: ";
	cin >> r;
	float dt = M_PI * r * r;
	cout << "Dien tich cua duong tron la: " << dt;
	return 1;
}