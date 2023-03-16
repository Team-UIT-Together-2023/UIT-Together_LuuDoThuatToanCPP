#include <iostream>
using namespace std;
int main()
{
	int n, ahh, bhh;
	cout << "Nhap n: ";
	cin >> n;
	int at = 1;
	int bt = 1;
	int i = 2;
	while (i <= n)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		i = i + 1;
		at = ahh;
		bt = bhh;
	}
	cout << ahh;
	cout << bhh;
	return 0;
}