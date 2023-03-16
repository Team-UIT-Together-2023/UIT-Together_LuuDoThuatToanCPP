#include<iostream>
using namespace std;
#include<cmath>
float Dien_tich(float);

int main()
{
	float r;
	cout << "Ban kinh = ";
	cin >> r;
	cout << "Dien tich duong tron = " << Dien_tich(r) << endl;
	return 0;
}
float Dien_tich(float k)
{
	double dt = 3.14 * k * k;
	return dt;
}