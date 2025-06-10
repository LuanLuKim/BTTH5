#pragma once
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
class NhanVien
{
protected:
	string maNV;
	string hoTen;
	int tuoi;
	string sdt;
	string email;
	int luongCB;
public:
    NhanVien()
    {
        maNV = "";
        hoTen = "";
        tuoi = 0;
        sdt = "";
        email = "";
        luongCB = 0;
    }
    ~NhanVien(){}


    virtual void Nhap();
    virtual void Xuat();

    // Ham tinh luong
    // Input: Khong co
    // Output: Tra ve luong cua nhan vien (double)
    // Huong giai quyet: Tinh toan tuy theo loai nhan vien (Dev hoac Tester)
    virtual double tinhLuong() = 0;

    // Ham lay loai nhan vien
    // Input: Khong co
    // Output: Tra ve loai nhan vien (1 neu la Dev, 0 neu la Tester)
    // Huong giai quyet: Override trong lop Dev va Tester de phan biet loai
    virtual bool getLoaiNV() = 0;
};
