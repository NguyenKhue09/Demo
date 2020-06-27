#pragma once
#include"NhanVien.h"

class NVSanXuat:public NhanVien
{
private:
	int luongcoban, sosp;
public:
	NVSanXuat()
	{
		loainhanvien = 1;
	}
	void Nhap();
	void Xuat();
	void TinhLuong();
};

