#include <iostream>
using namespace std;

void InputN(int&);
void UocLe(int);

int main()
{
	cout << "Bai 053: Liet ke tat ca cac uoc so le cua so nguyen duong n." << endl;
	int n;
	InputN(n);
	UocLe(n);
	return 1206;
}

void InputN(int& n)
{
	cout << "\nNhap so nguyen duong n: ";
	cin >> n;
}
void UocLe(int n)
{
	cout << "\nUoc so le cua so n la: ";
	for (int i = 1; i <= n; i = i + 2)
		if (n % i == 0)
			cout << i << " ";
	cout << "." << endl;
}