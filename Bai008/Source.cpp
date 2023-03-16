#include <iostream>
#include <cmath>
#define M_PI 3.14
using namespace std;
int main()
{
	int n;
	cout << "Nhap so canh noi tiep: ";
	cin >> n;
	float r;
	cout << "Nhap ban kinh: ";
	cin >> r;
	float cv = 2 * n * r * sin(M_PI / n);
	cout << "Chu vi da giac deu noi tiep la: " << cv;
	return 0;
}