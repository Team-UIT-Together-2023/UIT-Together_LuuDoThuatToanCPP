#include<iostream>
#include<cmath>

using namespace std;

int XuLy(int&);

int main()
{
	int n;
	cin >> n;
	cout << XuLy(n);
	return 0;
}
int XuLy(int& n)
{
	int dt = abs(n);
	while (dt >= 10)
		dt = dt / 10;
	return dt;
}