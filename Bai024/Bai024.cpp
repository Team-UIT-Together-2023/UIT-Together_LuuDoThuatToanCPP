#include<iostream>
using namespace std;
#include<math.h>
int Find_tram(int);
int main()
{
	int n;
	cout << "n = ";
	cin >> n;

	cout << "Chu so hang tram la " << Find_tram(n) << endl;
	return 0;
}
int Find_tram(int k)
{
	int ht = (k / 100) % 10;
	return ht;
}