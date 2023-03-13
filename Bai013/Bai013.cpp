#include <iostream>
using namespace std;
int main()
{
	int x;
	cout << "Nhap x= ";
	cin >> x;
	int x2 = x * x;
	int x3 = x * x2;
	int x5 = x2 * x3;
	int x7 = x2 * x5;
	cout << " x7 = " << x7;
	return 0;
}