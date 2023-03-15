#include <iostream>
using namespace std;
void Tinhsohang(int);
int ahh, bhh;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	Tinhsohang(n);
	cout << "So hang a thu " << n << " la: " << ahh << endl;
	cout << "So hang b thu " << n << " la: " << bhh;
	return 1;
}

void Tinhsohang(int k)
{
	int at = 2;
	int bt = 1;
	int i = 2;
	while (i <= k)
	{
		ahh = at * at + 2 * bt * bt;
		bhh = 2 * at * bt;
		i++;
		at = ahh;
		bt = bhh;
	}
}