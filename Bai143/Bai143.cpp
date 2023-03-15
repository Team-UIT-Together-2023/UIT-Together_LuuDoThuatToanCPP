#include <iostream>
using namespace std;

void InputN(int&);
void KiemTraHoanThien(int);

int main()
{
	cout << "Bai 143: Kiem tra xem so nguyen duong n co phai la so hoan thien hay khong." << endl;
	int n;
	InputN(n);
	KiemTraHoanThien(n);
	return 1206;
}

void InputN(int& n)
{
	cout << "\nNhap gia tri nguyen duong n: ";
	cin >> n;
}

void KiemTraHoanThien(int n)
{
	int s = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			s = s + i;
	if(s==n)
		cout << endl << n << " la so hoan thien." << endl;
	else
		cout << endl << n << " khong la so hoan thien." << endl;

}