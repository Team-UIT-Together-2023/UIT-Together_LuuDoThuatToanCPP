#include <iostream>
using namespace std;

void InputX(int&);
int XuLy(int);

int main()
{
	cout << "Bai 137: Tinh gia tri cua ham so f(x)." << endl;
	int x;
	InputX(x);
	int f = XuLy(x);
	cout << "\nGia tri cua ham so f(" << x << ") la: " << f << "." << endl;
	return 0;
}

void InputX(int& x)
{
	cout << "\nNhap gia tri so nguyen x: ";
	cin >> x;
}

int XuLy(int x)
{
	int f = 0;
	if (x >= 5)
		f = 2 * x * x + 5 * x + 9;
	else
		f = 2 * x * x + 4 * x - 9;
	return f;
}