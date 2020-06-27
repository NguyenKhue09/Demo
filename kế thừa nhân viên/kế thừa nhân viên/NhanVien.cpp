#include "NhanVien.h"

void NhanVien::Nhap()
{
	cin.ignore();
	cout << "Nhap hovaten nhan vien : "; getline(cin, hovaten);
	cout << "Nhap ngay sinh nhan vien : "; getline(cin, ngaysinh);
}
void NhanVien::Xuat()
{
	cout << "Hovaten nhan vien : "<<hovaten<<endl; 
	cout <<  "Ngay sinh nhan vien : "<<ngaysinh<<endl;
}