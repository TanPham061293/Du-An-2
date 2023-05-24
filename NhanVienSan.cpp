#include "NhanVienSan.h"

void NhanVienSanXuat::Nhap()
{
	NhanVien::Nhap();
	cout << "So san pham:";
	cin >> sosanpham;
}
void NhanVienSanXuat::Xuat()
{
	NhanVien::Xuat();
	cout << "So san pham:" << sosanpham << endl;
	cout << "Tien luong:" << TinhTienLuong() << endl;
}
float NhanVienSanXuat::TinhTienLuong()
{
	return (float)(sosanpham * 20000);
}