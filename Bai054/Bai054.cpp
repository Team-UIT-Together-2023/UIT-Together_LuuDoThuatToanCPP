#include<iostream>
using namespace std;
#include<math.h>
int Tong_uocchan(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;

	cout << "Tong uoc so chan cua " << n << " la: " << Tong_uocchan(n);
	return 0;
}
int Tong_uocchan(int k)
{
	int s = 0;
	int i = 2;
	while (i <= k)
	{
		if (k % i == 0)
			s = s + i;
		i = i + 2;
	}
	return s;
}