#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct diem
{
	int x;
	int y;
};
typedef struct diem DIEM;
struct tamgiac
{
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef struct tamgiac TAMGIAC;

void InputD(DIEM&);
void InputT(TAMGIAC&);
void XuLy(TAMGIAC);

int main()
{
	cout << "Bai 131: Cho 3 diem A(x1, y1), B(x2, y2), C(x3, y3). Kiem tra xem 3 dinh nay co tao thanh mot tam giac khong." << endl;
	TAMGIAC ABC{};
	InputT(ABC);
	XuLy(ABC);
	return 1206;
}

void InputD(DIEM& P)
{
	cout << "\nNhap gia tri x cua diem: ";
	cin >> P.x;
	cout << "Nhap gia tri y cua diem: ";
	cin >> P.y;
}
void InputT(TAMGIAC& ABC)
{
	cout << "\nNhap toa do diem A(x1, y1):";
	InputD(ABC.A);
	cout << "\nNhap toa do diem B(x2, y2):";
	InputD(ABC.B);
	cout << "\nNhap toa do diem C(x3, y3):";
	InputD(ABC.C);
}

void XuLy(TAMGIAC ABC)
{
	double a = sqrt((ABC.B.x - ABC.C.x) * (ABC.B.x - ABC.C.x) + (ABC.B.y - ABC.C.y) * (ABC.B.y - ABC.C.y));
	double b = sqrt((ABC.C.x - ABC.A.x) * (ABC.C.x - ABC.A.x) + (ABC.C.y - ABC.A.y) * (ABC.C.y - ABC.A.y));
	double c = sqrt((ABC.B.x - ABC.A.x) * (ABC.B.x - ABC.A.x) + (ABC.B.y - ABC.A.y) * (ABC.B.y - ABC.A.y));
	if (a + b > c && b + c > a && a + c > b)
		cout << "\n3 diem A, B, C tao thanh mot tam giac." << endl;
	else
		cout << "\n3 diem A, B, C khong tao thanh tam giac." << endl;
}