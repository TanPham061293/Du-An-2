#include "Ngay.h"
void Ngay::NhapNgay()
{
	cout << "Nam lap:";
	cin >> namlap;

	cout << "Thang lap:";
	cin >> thanglap;

	cout << "Ngay lap:";
	cin >> ngaylap;
}
void Ngay::XuatNgay()
{
	cout << "Ngay lap:" << ngaylap <<"-" << thanglap <<"-" << namlap << endl;
}