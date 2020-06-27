#include "NVVanPhong.h"

void NVVanPhong::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap so ngay lam viec : "; cin >> songaylamviec;
	TinhLuong();
}
void NVVanPhong::TinhLuong()
{
	luong = songaylamviec * 100000;
}
void NVVanPhong::Xuat()
{
	NhanVien::Xuat();
	cout << "Luong : " << luong << endl;
}
