#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Bai 017: Tinh gia tri x^11 voi so luong phep nhan toi thieu." << endl;
	float x;
	cout << "\nNhap gia tri x: ";
	cin >> x;
	float x2 = x * x;
	float x3 = x2 * x;
	float x6 = x3 * x3;
	float x9 = x6 * x3;
	float x11 = x9 * x2;
	cout << "\nGia tri x^11 la: " << x11 << endl;
	return 1;
}