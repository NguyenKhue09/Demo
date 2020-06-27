#include "QuanLy.h"

void QuanLy::Nhap()
{
	cin >> n;
	arr = new NhanVien * [n];
	int flag = 0;
	cout << "1.NVSanXuat 2.NVVanPhong" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> flag;
		switch (flag)
		{
		case 0:
			arr[i] = new NhanVien;
			arr[i]->Nhap();
			break;
		case 1:
			arr[i] = new NVSanXuat;
			((NVSanXuat*)arr[i])->Nhap();
			break;
		case 2:
			arr[i] = new NVVanPhong;
			((NVVanPhong*)arr[i])->Nhap();
			break;
		default:
			break;
		}
	}
}
void QuanLy::Xuat()
{
	for (int i = 0; i < n; i++)
	{
		switch (arr[i]->loainhanvien)
		{
		case 0:
			arr[i]->Xuat();
			break;
		case 1:
			((NVSanXuat*)arr[i])->Xuat();
			break;
		case 2:
			((NVVanPhong*)arr[i])->Xuat();
			break;
		default:
			break;
		}
	}
}
void QuanLy::tim_NV_max_luong()
{
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i]->loainhanvien == 1)
			if (((NVSanXuat*)arr[i])->luong > max) max = arr[i]->luong;
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i]->loainhanvien == 1)
			if (arr[i]->luong == max) ((NVSanXuat*)arr[i])->Xuat();;
	}
}