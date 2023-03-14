#include<iostream>
using namespace std;
#include<math.h>
int Tich_chuso(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;

	cout << "Tich cac chu so cua " << n << " la: " << Tich_chuso(n);
	return 0;
}
int Tich_chuso(int k)
{
	int s = 1;
	int t = k;
	while (t != 0)
	{
		int dv = t % 10;
		s = s * dv;
		t = t / 10;
	}
	return s;
}