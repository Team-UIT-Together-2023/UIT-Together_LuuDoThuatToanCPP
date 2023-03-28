#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Nhap x: ";
    cin >> x;
    int x2 = x * x;
    int x4 = x2 * x2;
    int x8 = x4 * x4;
    int x16 = x8 * x8;
    int x15 = x16 / x;
    cout << "x^ 15 = " << x15;
    return 0;
}