#include "NhanVien.h"

void NhanVien::Nhap()
{
	rewind(stdin);
	cout << "Ma so nhan vien:";
	getline(cin, maso);

	rewind(stdin);
	cout << "Ten nhan vien:";
	getline(cin, hoten);

	ngaysinh.NhapNgay();

	rewind(stdin);
	cout << "Dia chi:";
	getline(cin, diachi);

}
void NhanVien::Xuat()
{
	cout << "Ma so nhan vien:" << maso << endl;
	cout << "Ten nhan vien:" << hoten << endl;
	ngaysinh.XuatNgay();
	cout << "Dia chi:" << diachi << endl;
}