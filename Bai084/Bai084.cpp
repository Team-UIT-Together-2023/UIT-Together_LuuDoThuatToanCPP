#include<iostream>
using namespace std;
#include<math.h>
float Tinh(float, int);
int main()
{
	float x;
	cout << "x = ";
	cin >> x;
	int n;
	cout << "n = ";
	cin >> n;

	cout << "S(" << x << "," << n << ") = " << Tinh(x, n) << endl;
	return 0;
}
float Tinh(float y, int k)
{

	float s = 0;
	float t = y;
	int i = 1;
	while (i <= k)
	{
		t = sin(t);
		s = s + t;
		i = i + 1;
	}
	return s;
}
















