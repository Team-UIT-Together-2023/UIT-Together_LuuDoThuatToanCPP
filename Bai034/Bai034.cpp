#include <iostream>
using namespace std;
float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float kq = Tong(n);
	cout << "Tong S(" << n << ") la: " << kq;
	return 1;
}

float Tong(int k)
{
	float s = 0;
	for (int i = 1; i <= 2 * k + 1; i = i + 2)
		s = s + (float)i / (i + 1);
	return s;
}