#pragma once
#include"NhanVien.h"
#include"NVSanXuat.h"
#include"NVVanPhong.h"

class QuanLy
{
private:
	int n;
	NhanVien** arr;
public:
	void Nhap();
	void Xuat();
	void tim_NV_max_luong();
};

