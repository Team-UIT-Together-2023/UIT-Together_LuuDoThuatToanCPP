#include<iostream>
using namespace std;
#include<math.h>
#include<cmath>

int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	int lc = n % 10;
	int t = n;
	int flag = 1;
	int dv;
	while (t != 0)
	{
		dv = t % 10;
		if (dv < lc)
		{
			flag = 0;
		}
		lc = dv;
		t = t / 10;
	}
	if (flag == 1)
	{
		cout << "Cac chu so cua " << n << " giam dan tu trai sang phai " << endl;
	}
	else
		cout << "Cac chu so cua " << n << " khong giam dan tu trai sang phai " << endl;
	return 0;
}