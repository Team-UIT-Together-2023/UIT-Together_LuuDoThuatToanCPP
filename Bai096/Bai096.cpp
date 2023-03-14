#include<iostream>
using namespace std;
#include<math.h>
float Tinh(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;

	cout << "S(" << n << ") = " << Tinh(n) << endl;
	return 0;
}
float Tinh(int k)
{
	float s = 0;
	int t = 1;
	int i = 1;
	while (i <= k)
	{
		t = t * i;
		s = sqrt(t + s);
		i = i + 1;
	}
	return s;
}







