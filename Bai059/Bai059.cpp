#include <iostream>
using namespace std;

void InputN(int&);
int DemSLCS(int);

int main()
{
	cout << "Bai 059: Dem so luong chu so cua so nguyen duong n." << endl;
	int n;
	InputN(n);
	int slcs = DemSLCS(n);
	cout << "\nSo luong chu so cua so n la: " << slcs << "." << endl;
	return 1206;
}

void InputN(int& n)
{
	cout << "\nNhap so nguyen duong n: ";
	cin >> n;
}
int DemSLCS(int n)
{
	int dem = 0;
	for (int t = n; t != 0; t = t / 10)
		dem++;
	return dem;
}