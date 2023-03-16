#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float s = 0;
	float e = 4;
	int i = 1;
	int dau = 1;
	while (e >= pow(10, -6))
	{
		e = (float)4 / i;
		s = s + e * dau;
		dau = -dau;
		i = i + 2;
	}
	cout << s;
	return 0;
}