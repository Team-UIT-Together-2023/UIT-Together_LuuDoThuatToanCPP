#include <iostream>

using namespace std;

int MaxUocSoLe(int n)
{
    for (int i = n; i >= 1; i--)
    {
        if (n % i == 0 && i % 2 != 0)
        {
            return i;
        }
    }
}

int main()
{
    int n;
    cout << "n = ";
    cin >> n;

    int max= MaxUocSoLe(n);
    cout << "Uoc so le Lon Nhat = " << max << endl;
    return 0;
}