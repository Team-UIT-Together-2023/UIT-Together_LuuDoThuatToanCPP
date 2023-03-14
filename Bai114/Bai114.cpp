#include<iostream>
using namespace std;
#include<math.h>
int So_thu(int);
int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;

	cout << "a(" << n << ") = " << So_thu(n) << endl;
	return 0;
}
int So_thu(int k)
{
	int at = -2;
	int i = 2;
	int ahh = 0;
	while (i <= k)
	{
		ahh = 5 * at + 2 * pow(3, i) - 6 * pow(7, i) + 12;
		i = i + 1;
		at = ahh;
	}
	return ahh;
}

