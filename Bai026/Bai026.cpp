#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Nhap 2 so : ";
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "2 so sau khi hoan vi: " << a << " " << b;
    return 0;
}