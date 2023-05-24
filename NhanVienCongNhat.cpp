#include "NhanVienCongNhat.h"

void NhanVienCongNhat::Nhap()
{
	NhanVien::Nhap();
	cout << "So ngay cong:";
	cin >> songaycong;
}
void NhanVienCongNhat::Xuat()
{
	NhanVien::Xuat();
	cout << "So ngay cong:" << songaycong << endl;
	cout << "Tien Luong:" << TinhTienLuong() << endl;
}
float NhanVienCongNhat::TinhTienLuong()
{
	return (float)(songaycong * 55000);
}