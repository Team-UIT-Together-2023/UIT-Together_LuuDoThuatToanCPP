#include<iostream>
using namespace std;
#include<math.h>
bool Check_chan(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;

	if (Check_chan(n))
		cout << "So " << n << " khong ton tai chu so chan " << endl;
	else
		cout << "So " << n << " ton tai chu so chan " << endl;
	return 0;
}
bool Check_chan(int k)
{
	int t = k;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			return false;
		t = t / 10;
	}
	return true;
}