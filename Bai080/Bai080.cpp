#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cout << "Nhap n, x: ";
    cin >> n >> x;
    int s = 1;
    int i = 1;
    int t = 1;
    while (i <= n)
    {
        t = t * x;
        s = s + t * (i + 1);
        i = i + 1;
    }
    cout << s;
    return 0;
}