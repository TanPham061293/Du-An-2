#include "NhanVienQuanLy.h"

void NhanVienQuanLy::Nhap()
{
	NhanVien::Nhap();
	cout << "Luong co ban:";
	cin >> luongcoban;

	cout << "He so luong:";
	cin >> hesoluong;
}
void NhanVienQuanLy::Xuat()
{
	NhanVien::Xuat();
	cout << "He so luong:" << hesoluong << endl;
	cout << "Tien luong:" << TinhTienLuong() << endl;
}
float NhanVienQuanLy::TinhTienLuong()
{
	return (float)luongcoban * hesoluong;
}