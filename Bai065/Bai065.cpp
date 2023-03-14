#include <iostream>
#include <cmath>
using namespace std;

void InputN(int&);
int CSMin(int);

int main()
{
	cout << "Bai 065: Tim chu so nho nhat cua so nguyen duong n." << endl;
	int n;
	InputN(n);	
	int csm = CSMin(n);
	cout << "\nChu so nho nhat cua so n la: " << csm << "." << endl;
	return 1206;
}

void InputN(int& n)
{
	cout << "\nNhap so nguyen duong n: ";
	cin >> n;
	n = abs(n);
}
int CSMin(int n)
{
	int dv;
	int lc = n % 10;
	for (int t = n; t != 0; t = t / 10)
	{
		dv = t % 10;
		if (dv < lc)
			lc = dv;
	}
	return lc;
}