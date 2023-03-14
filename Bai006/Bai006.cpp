#include<iostream>
using namespace std;
#include<math.h>
float Convert(float);
int main()
{
	float c;
	cout << "Do C = ";
	cin >> c;

	cout << "Do F = " << Convert(c) << endl;
	return 0;
}
float Convert(float k)
{
	float f = (9 * k) / 5 + 32;
	return f;
}