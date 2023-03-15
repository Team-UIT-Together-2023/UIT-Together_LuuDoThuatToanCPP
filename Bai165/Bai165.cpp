#include<iostream>
#include<cmath>

using namespace std;

int XuLy(int);

int main()
{
    int n;
    cin >> n;
    int res = XuLy(n);

    cout << res;

    return 0;
}
int XuLy(int n)
{
    int k = 0;
    while (pow(2, k) < n + 1)
    {
        k++;
    }
    return k - 1;
}