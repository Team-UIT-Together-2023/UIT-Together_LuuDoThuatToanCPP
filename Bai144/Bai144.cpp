#include<iostream>
using namespace std;
#include<math.h>
#include<cmath>
bool is_prime(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;

	if (is_prime(n))
	{
		cout << "So " << n << " la so nguyen to" << endl;
	}
	else
		cout << "So " << n << " khong la so nguyen to" << endl;
	return 0;
}
bool is_prime(int n)
{
	int dem = 0;
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
		{
			dem = dem + 1;
		}
		i = i + 1;
	}
	if (dem == 2)
		return true;
	else
		return false;
}