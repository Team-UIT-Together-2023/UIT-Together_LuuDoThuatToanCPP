#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cout << "Nhap n, x: ";
    cin >> n >> x;
    float s = 0;
    int i = 1;
    int t = 1;
    int m = 1;
    while (i <= n)
    {
        t = t * x;
        m = m * i;
        s = s + (float)t / m;
        i = i + 1;
    }
    cout << s;
    return 0;
}