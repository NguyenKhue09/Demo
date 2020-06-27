#include "NVSanXuat.h"

void NVSanXuat::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap luong co ban : "; cin >> luongcoban;
	cout << "Nhap so san pham  : "; cin >> sosp;
	TinhLuong();

}
void NVSanXuat::TinhLuong()
{
	luong = luongcoban + sosp * 5000;
}
void NVSanXuat::Xuat()
{
	NhanVien::Xuat();
	cout << "Luong : " << luong<<endl;
}
