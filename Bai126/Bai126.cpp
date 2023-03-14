#include<iostream>
using namespace std;
#include<math.h>
float Max(float, float);
int main()
{
	float a;
	cout << "Nhap a = ";
	cin >> a;
	float b;
	cout << "Nhap b = ";
	cin >> b;

	cout << "Gia tri lon nhat la  " << Max(a, b) << endl;
	return 0;
}
float Max(float a, float b)
{
	float lc = a;
	if (lc < b)
		lc = b;
	return lc;
}