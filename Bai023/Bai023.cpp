#include <iostream>
using namespace std;

void InputN(int&);
int HangChuc(int);

int main()
{
	cout << "Bai 023: Tim chu so hang tram cua so nguyen duong n." << endl;
	int n;
	InputN(n);
	int hc = HangChuc(n);
	cout << "\nChu so hang chuc cua n la: " << hc << "." << endl;
	return 1206;
}

void InputN(int& n)
{
	cout << "\nNhap so nguyen duong n: ";
	cin >> n;
}
int HangChuc(int n)
{
	return (n / 10) % 10;
}