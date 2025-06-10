#pragma once
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

struct dateTime
{
	int ngay, thang, nam;
};

class NhanVien
{
protected:
	string hoTen;
	dateTime ngaySinh;
	int luong;
	bool loaiNV;
public:
	NhanVien() {}
	virtual void Nhap();
	void Xuat();
	virtual void tinhLuong() = 0;
	// Ham lay ngay sinh
	// Input: Khong co
	// Output: Ngay sinh cua nhan vien
	dateTime getNgaySinh() { return ngaySinh; }
	// Ham lay loai nhan vien
	// Input: Khong co
	// Output: True neu la nhan vien san xuat, false neu la nhan vien van phong
	bool getLoaiNV() { return loaiNV; }
	// Ham lay luong
	// Input: Khong co
	// Output: Tien luong cua nhan vien
	int getLuong() { return luong; }
	~NhanVien(){}
};

