#pragma once
#include "SinhVien.h"
class DaiHoc : public SinhVien
{
private:
    string tenLuanVan;
    double diemLuanVan;

public:
    DaiHoc() : diemLuanVan(0){}

    void Nhap() override;
    void Xuat() override;

    // Input: Khong co
    // Output: True neu sinh vien du tot nghiep
    // Huong giai quyet: Kiem tra tong tin chi >= 170, diemTB >= 5, diem luan van >= 5
    bool isTotNghiep() override
    {
        return tongTinChi >= 170 && diemTB >= 5 && diemLuanVan >= 5;
    }

    // Input: Khong co
    // Output: True vi la sinh vien dai hoc
    bool getLoaiSV() override
    {
        return true;
    }
    ~DaiHoc(){}
};

