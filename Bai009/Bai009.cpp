#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float r, n;
    cout << "Nhap ban kinh: ";
    cin >> r;
    cout << "Nhap so canh: ";
    cin >> n;
    float s = (n * pow(r, 2) * sin(2 * M_PI / n)) / 2;
    cout << "dien tich la: " << s;
    return 0;
}