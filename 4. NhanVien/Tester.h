#pragma once
#include "NhanVien.h"
class Tester : public NhanVien
{
private:
    int numOfBugs;
public:
    Tester() { numOfBugs = 0; }

    void Nhap() override;
    void Xuat() override;

    // Ham tinh luong
    // Input: Khong co
    // Output: Tra ve luong cua kiem chung vien
    // Huong giai quyet: Luong = luongCB + numOfBugs * 50000
    double tinhLuong() override
    {
        return luongCB + numOfBugs * 50000;
    }

    // Ham lay loai nhan vien
    // Input: Khong co
    // Output: Tra ve 0 de xac dinh la Tester
    bool getLoaiNV() override
    {
        return 0;
    }

    ~Tester(){}
};

