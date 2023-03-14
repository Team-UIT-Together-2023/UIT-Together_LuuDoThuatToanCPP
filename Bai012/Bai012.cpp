#include<iostream>
using namespace std;
#include<math.h>
float Mu_6(float);
int main()
{
	float x;
	cout << "x = ";
	cin >> x;

	cout << "x6 = " << Mu_6(x) << endl;
	return 0;
}
float Mu_6(float x)
{
	float x2 = x * x;
	float x3 = x2 * x;
	float x6 = x3 * x3;
	return x6;
}