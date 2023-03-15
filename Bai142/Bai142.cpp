#include <iostream>
#include <cmath>
using namespace std;
float Sodaonguoc(int);

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	float kq = Sodaonguoc(n);
	cout << "Chu so dao nguoc la: " << kq;
	return 1;
}
float Sodaonguoc(int n)
{
	int t = n;
	int dn = 0;
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	return dn;
}

