#pragma once
#include<string>
#include<iostream>
using namespace std;

class NhanVien
{
protected:
	string hovaten, ngaysinh;
public:
	int luong;
	int loainhanvien;
	void Nhap();
	void Xuat();
};

