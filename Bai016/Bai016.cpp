#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float&);
float Xuly(float);

int main()
{
	float x;
	Nhap(x);
	float x9 = Xuly(x);
	cout << "x^9 = " << x9;
	return 1;
}

void Nhap(float& x)
{
	cout << "Nhap x: ";
	cin >> x;
}
float Xuly(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x9 = x8 * x;
	return x9;
}
