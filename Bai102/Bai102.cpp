#include<iostream>
using namespace std;
#include<math.h>
float Tinh_tong(int&);
int main()
{
	int i = 0;
	float kq = Tinh_tong(i);
	cout << "S(" << i << ") = " << kq << endl;
	return 0;
}
float Tinh_tong(int& i)
{
	float s = 0;
	float e = 1;
	while (e >= pow(10, -6))
	{
		i = i + 1;
		e = (float)1 / (2 * i);
		s = s + e;

	}
	return s;
}

