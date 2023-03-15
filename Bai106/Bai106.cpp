#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float&);
float Xuly(float);

int main()
{
	float x;
	Nhap(x);
	float s = Xuly(x);
	cout << "Sin(" << x << ") = " << s;
	return 0;
}

void Nhap(float& x)
{
	cout << "Nhap x: ";
	cin >> x;
}
float Xuly(float x)
{
	float sin = x;
	short dau = -1;
	float t = x;
	int m = 1;
	float e = x;
	int i = 2;
	while (e >= 1 / pow(10, 6))
	{
		t = t * x * x;
		m = m * i * (i + 1);
		e = t / m;
		sin = sin + dau * e;
		dau = -dau;
		i = i + 2;
	}
	return sin;
}

