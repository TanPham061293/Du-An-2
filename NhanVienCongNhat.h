#pragma once
#include"NhanVien.h"
class NhanVienCongNhat :public NhanVien
{
private:
	float songaycong;
public:
	void Nhap();
	void Xuat();
	float TinhTienLuong();
};

