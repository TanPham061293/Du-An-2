#include "CongTy.h"

void CongTy::NhapDanhSach()
{
	char luachon;
	do
	{
		cout << "================== MENU ==================\n";
		cout << "1. Nhan vien san xuat.\n";
		cout << "2. Nhan vien cong nhat.\n";
		cout << "3. Nhan vien quan ly.\n";
		cout << "4. Thoat.\n";

		cout << "Lua chon cua ban:";
		cin >> luachon;
		NhanVien* x;
		if (luachon=='1')
		{
			x = new	NhanVienSanXuat;
			x->Nhap();
			list.push_back(x);
		}
		else if (luachon == '2')
		{
			x = new NhanVienCongNhat;
			x->Nhap();
			list.push_back(x);
		}
		else if (luachon=='3')
		{
			x = new NhanVienQuanLy;
			x->Nhap();
			list.push_back(x);
		}
		else if (luachon != '4')
		{
			cout << "Lua chon khon phu hop. Xin kiem tra lai.\n";
		}
	} while (luachon != '4');
}
void CongTy::XuatDanhSach()
{
	for (int i = 0; i < list.size(); i++)
	{
		list[i]->Xuat();
	}
}
float CongTy::TinhTongTienLuong()
{
	float Tong = 0;
	for (int i = 0; i < list.size(); i++)
	{
		Tong += list[i]->TinhTienLuong();
	}
	return Tong;
}