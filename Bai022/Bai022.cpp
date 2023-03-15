#include <iostream>
using namespace std;

void Nhap(int&);
int XuLy(int);

int main()
{
    int n;
    Nhap(n);
    int kq = XuLy(n);
    cout << "Chu so hang don vi cua so n la: " << kq;
    return 1;
}
void Nhap(int& n)
{
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
}
int XuLy(int n)
{
    int dv = n % 10;
    return dv;
}
