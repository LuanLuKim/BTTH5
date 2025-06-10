#pragma once
#include "NhanVien.h"
class Dev : public NhanVien
{
private:
    double overtimes;
public:
    Dev() { overtimes = 0; }


    
    void Nhap() override;
    void Xuat() override;

    // Ham tinh luong
    // Input: Khong co
    // Output: Tra ve luong cua lap trinh vien
    // Huong giai quyet: Luong = luongCB + overtime * 200000
    double tinhLuong() override
    {
        return luongCB + overtimes * 200000;
    }
    // Ham lay loai nhan vien
    // Input: Khong co
    // Output: Tra ve 1 de xac dinh la Dev
    bool getLoaiNV() override
    {
        return 1;
    }

    ~Dev() {}
};

