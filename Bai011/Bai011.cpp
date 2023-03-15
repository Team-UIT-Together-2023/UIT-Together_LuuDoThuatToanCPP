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
float DienTich(TAMGIAC);

int main()
{
	cout << "Bai 011: Cho tam giac ABC voi ba dinh A(x1,y1), B(x2,y2), C(x3,y3). Tinh dien tich tam giac va xuat ket qua." << endl;
	TAMGIAC ABC{};
	InputT(ABC);
	float area = DienTich(ABC);
	cout << "\nDien tich tam giac la: " << setprecision(6) << area << endl;
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
	InputD (ABC.A);
	cout << "\nNhap toa do diem B(x2, y2):";
	InputD(ABC.B);
	cout << "\nNhap toa do diem C(x3, y3):";
	InputD(ABC.C);
}

float DienTich(TAMGIAC ABC)
{
	float a = sqrt((ABC.B.x - ABC.C.x) * (ABC.B.x - ABC.C.x) + (ABC.B.y - ABC.C.y) * (ABC.B.y - ABC.C.y));
	float b = sqrt((ABC.C.x - ABC.A.x) * (ABC.C.x - ABC.A.x) + (ABC.C.y - ABC.A.y) * (ABC.C.y - ABC.A.y));
	float c = sqrt((ABC.B.x - ABC.A.x) * (ABC.B.x - ABC.A.x) + (ABC.B.y - ABC.A.y) * (ABC.B.y - ABC.A.y));
	float p = (a + b + c) / (float)2;
	float s = sqrt(p * (p - a) * (p - b) * (p - c));
	return s;
}