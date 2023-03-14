#include<iostream>
using namespace std;
#include<math.h>
float Tinh_tong(float, int);
int main()
{
	float x;
	cout << "x = ";
	cin >> x;
	int n;
	cout << "n = ";
	cin >> n;

	cout << "T(" << x << "," << n << ") = " << Tinh_tong(x, n) << endl;
	return 0;
}
float Tinh_tong(float y, int k)
{
	float t = 1;
	for (int i = 1; i <= k; i++)
	{
		t = t * y;
	}
	return t;
}