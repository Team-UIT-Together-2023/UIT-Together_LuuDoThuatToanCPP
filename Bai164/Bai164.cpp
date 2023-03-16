#include<iostream>
#include<cmath>
using namespace std;
float XuLy(int);
int main()
{
    int n;
    cin >> n;
    float res = XuLy(n);
    cout << res;
    return 0;
}
float XuLy(int n)
{
    float s = 0;
    int i = 0;
    while (i<=n)
    {
        s = 1 / (1 + s);
        i++;
    }
    return s;
}