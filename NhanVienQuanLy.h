#pragma once
#include"NhanVien.h"

class NhanVienQuanLy :public NhanVien
{
private:
	float hesoluong;
	int luongcoban;
public:
	void Nhap();
	void Xuat();
	float TinhTienLuong();
};

