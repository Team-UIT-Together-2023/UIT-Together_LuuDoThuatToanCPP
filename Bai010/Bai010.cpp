#include <iostream>
#include <cmath>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;
void Nhap(DIEM&);
float Khoangcach(DIEM, DIEM);
float ChuVi(DIEM, DIEM, DIEM);

int main()
{
	DIEM A, B, C;
	cout << "Nhap toa do diem A: ";
	Nhap(A);
	cout << "\nNhap toa do diem B: ";
	Nhap(B);
	cout << "\nNhap toa do diem C: ";
	Nhap(C);
	float kq = ChuVi(A, B, C);
	cout << "Chu vi tam giac la: " << kq;
	return 1;
}

void Nhap(DIEM& A)
{
	cout << "\nNhap x: ";
	cin >> A.x;
	cout << "Nhap y: ";
	cin >> A.y;
}

float Khoangcach(DIEM A, DIEM B)
{
	return sqrt((B.x - A.x) * (B.x - A.x) + (B.y - A.y) * (B.y - A.y));
}

float ChuVi(DIEM A, DIEM B, DIEM C)
{
	float a, b, c;
	a = Khoangcach(A, B);
	b = Khoangcach(B, C);
	c = Khoangcach(A, C);
	return a + b + c;
}