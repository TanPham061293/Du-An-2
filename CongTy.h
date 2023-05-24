#pragma once
#include"NhanVienCongNhat.h"
#include"NhanVienSan.h"
#include"NhanVienQuanLy.h"
#include<vector>
class CongTy
{
private:
	vector<NhanVien *> list;
public:
	void NhapDanhSach();
	void XuatDanhSach();
	float TinhTongTienLuong();
};

