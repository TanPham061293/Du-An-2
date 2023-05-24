#include"CongTy.h"

int main()
{
	/*NhanVien *a;
	a = new NhanVienCongNhat;
	a->Nhap();
	a->Xuat();*/
	CongTy *a;
	a = new CongTy;
	a->NhapDanhSach();
	a->XuatDanhSach();
	delete a;
	system("pause");
	return 0;
}