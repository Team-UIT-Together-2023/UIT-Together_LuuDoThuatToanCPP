#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n= ";
	cin >> n;
	int i = 1;
	int t = 1;
	while (i <= n)
	{
		if (n % i == 0)
			t = t * i;
		i = i + 2;
	}
	cout << "Tich cac uoc so le cua " << n << " la: " << t;
	return 0;
}