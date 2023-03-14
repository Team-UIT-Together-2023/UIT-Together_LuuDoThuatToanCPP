#include<iostream>
using namespace std;
#include<math.h>
float e_mu(float);
int main()
{
	float x;
	cout << "nhap x:";
	cin >> x;

	cout << "e^(" << x << ") = " << e_mu(x) << endl;
	return 0;
}
float e_mu(float x)
{
	float s = 1;
	float t = 1;
	int i = 1;
	int m = 1;
	float e = 1;
	while (e >= pow(10, -6))
	{
		t = t * x;
		m = m * i;
		e = (float)t / m;
		s = s + e;
		i = i + 1;
	}
	return s;
}