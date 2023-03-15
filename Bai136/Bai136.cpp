#include <iostream>
using namespace std;
void LietKeNamNhuan(int, int);

int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;
	int y;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Nam nhuan la : ";
	LietKeNamNhuan(x, y);
	return 0;
}

void LietKeNamNhuan(int x, int y)
{
	for (int n = x; n <= y; n++)
	{
		int dk1 = (n % 4 == 0 && n % 100 != 0);
		int dk2 = (n % 400 == 0);
		if (dk1 || dk2)
			cout << n << " ";
	}
}

