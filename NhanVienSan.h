#pragma once
#include"NhanVien.h"
class NhanVienSanXuat :public NhanVien
{
private:
	int sosanpham;
public:
	void Nhap();
	void Xuat();
	float TinhTienLuong();
};

