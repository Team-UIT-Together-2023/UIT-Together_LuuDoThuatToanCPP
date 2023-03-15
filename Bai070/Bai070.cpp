#include <iostream>
using namespace std;
float Tong(float, int);
int main()

{
	float x;
	cout << "Nhap x : ";
	cin >> x;
	int n;
	cout << "Nhap n : ";
	cin >> n;
	float kq = Tong(x, n);
	cout << "Tong S(" << x << "," << n << ") la: " << kq;
	return 0;
}

float Tong(float y, int k)
{
	float s = 0;
	float t = 1;

	for (int i = 2; i <= 2 * k; i = i + 2)
	{
		t = t * y * y;
		s = s + t;
	}
	return s;
}
