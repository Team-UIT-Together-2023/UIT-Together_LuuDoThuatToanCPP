#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	int ahh = 0;
	int at = 3;
	int att = -1;
	int i = 2;
	while (i <= n)
	{
		ahh = 5 * at + 6 * att;
		i = i + 1;
		att = at;
		at = ahh;
	}
	cout << "a(" << n << ")= " << ahh;
	return 0;
}