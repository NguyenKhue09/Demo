#pragma once
#include"NhanVien.h"

class NVVanPhong:public NhanVien
{
private:
	int songaylamviec;
public:
	NVVanPhong()
	{
		loainhanvien = 2;
	}
	void Nhap();
	void Xuat();
	void TinhLuong();
};

