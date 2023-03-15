#define _USE_MATH_DEFINES

#include<iostream>
#include<cmath> 

using namespace std;

int main()
{
	float r;
	cout << "nhap ban kinh ";
	cin >> r;
	float p = 2 * r * M_PI;
	cout << "chu vi la " << p;
	return 0;
}