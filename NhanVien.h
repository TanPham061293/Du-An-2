#pragma once
#include "Ngay.h"
#include <string>

class NhanVien
{
protected:
	string maso, hoten;
	Ngay ngaysinh;
	string diachi;
public:
	virtual void Nhap();
	virtual void Xuat();
	//virtual float TinhTienLuong() = 0;
	virtual float TinhTienLuong()
	{
		return 0;
	}
};


