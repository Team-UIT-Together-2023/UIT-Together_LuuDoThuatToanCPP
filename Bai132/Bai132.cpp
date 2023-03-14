#include<iostream>
using namespace std;
#include<math.h>
#include<cmath>
void Nhap(const string&, float&, float&);
bool is_M_in(float, float, float, float, float, float, float, float);
int main()
{
	float xa, ya, xb, yb, xc, yc, xm, ym;
	Nhap("A", xa, ya);
	Nhap("B", xb, yb);
	Nhap("C", xc, yc);
	Nhap("M", xm, ym);
	if (is_M_in(xa, ya, xb, yb, xc, yc, xm, ym))
		cout << "M nam trong tam giac ABC";
	else
		cout << "M nam ngoai tam giac ABC  ";
	return 0;
}
void Nhap(const string& S, float& x, float& y)
{
	cout << "Nhap toa do diem " << S << " :" << endl;
	cout << "x" << S << " = ";
	cin >> x;
	cout << "y" << S << " = ";
	cin >> y;
	return;
}
bool is_M_in(float xa, float ya, float xb, float yb,
	float xc, float yc, float xm, float ym)
{
	float ABC = abs((float)(1 / 2) * (xa * yb + xb * yc + xc * ya - xb * ya - xc * yb - xa * yc));
	float AMB = abs((float)(1 / 2) * (xa * ym + xm * yb + xb * ya - xm * ya - xb * ym - xa * yb));
	float AMC = abs((float)(1 / 2) * (xa * ym + xm * yc + xc * ya - xm * ya - xc * ym - xa * yc));
	float BMC = abs((float)(1 / 2) * (xm * yb + xb * yc + xc * ym - xb * ym - xc * yb - xm * yc));
	float S = AMB + AMC + BMC;
	if (ABC == S)
		return true;
	else
		return false;
}