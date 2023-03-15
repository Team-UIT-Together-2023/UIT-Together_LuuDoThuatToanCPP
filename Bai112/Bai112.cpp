#include <iostream>
#include <cmath>
using namespace std;

float XuLy(float&);

int main()
{
	float pi = 4 - ((float)2 / 4) - ((float)1 / 5) - ((float)1 / 6);
	XuLy(pi);
	cout << "Gia tri pi (BBP) = " << pi;
	return 1;
}
float XuLy(float& pi)
{
	float t = 1;
	float e = 1;
	for (float i = 1; e >= pow(10, -6); i++)
	{
		t = t * 16;
		e = (((float)4 / (8 * i + 1)) - ((float)2 / (8 * i + 4)) - ((float)1 / (8 * i + 5)) - ((float)1 / (8 * i + 6))) / t;
		pi = pi + e;
	}
	return pi;
}

