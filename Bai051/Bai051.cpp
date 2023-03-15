#include <iostream>

using namespace std;

int tichUocSo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = tichUocSo(n);
	cout << "Tich cac uoc so cua " << n << " la: " << kq;
	return 0;
}
int tichUocSo(int k)
{
	int t = 1;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			t = t * i;
	return t;
}