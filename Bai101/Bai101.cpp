#include <iostream>
#include <cmath>
using namespace std;

double XuLy();

int main()
{
	cout << "Bai 101: Tinh tong S(n) voi do chinh xac 10^-6." << endl;
	double tong = XuLy();
	cout << "\nTong S la: " << tong << "." << endl;
	return 1206;
}
double XuLy()
{
	float s = 0;
	float e = 1;
	float i = 1;
	while (e >= pow(10, -6))
	{
		e = (float)1 / i;
		s = s + e;
		i = i + 1;
	}
	return s;
}