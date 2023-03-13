#include <iostream>
using namespace std;
int main()
{
	float f;
	cout << "Nhap f = ";
	cin >> f;
	float c = 1.8 * (f - 32);
	cout << f << " do F bang " << c << " do C";
	return 0;
}