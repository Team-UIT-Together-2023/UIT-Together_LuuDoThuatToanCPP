#include <iostream>
using namespace std;

void InputN(int&);
void XuLy(int);

int main()
{
	cout << "Bai 161: Kiem tra xem thu tu cac chu so cua so nguyen duong n co tang dan hay khong." << endl;
	int n;
	InputN(n);
	XuLy(n);
	return 1206;
}

void InputN(int& n)
{
	cout << "\nNhap gia tri nguyen duong n: ";
	cin >> n;
}

void XuLy(int n)
{
	bool flag = 1;
	int t = n;
	int sau = t % 10;
	int truoc = (t / 10) % 10;
	while (t >= 10)
	{
		sau = t % 10;
		truoc = (t / 10) % 10;
		if (sau <= truoc)
			flag = 0;
		t = t / 10;
	}
	t = n;
	if (flag == 1)
		cout << "\nThu tu cac chu so trong so nguyen duong n tang dan." << endl;
	else
		cout << "\nThu tu cac chu so trong so nguyen duong n khong tang dan." << endl;
}