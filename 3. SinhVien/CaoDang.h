#pragma once
#include "SinhVien.h"
class CaoDang : public SinhVien
{
private:
    double diemThiTN;

public:
    CaoDang() : diemThiTN(0){}

    void Nhap() override;
    void Xuat() override;

    // Input: Khong co
    // Output: True neu sinh vien du tot nghiep
    // Huong giai quyet: Kiem tra tong tin chi >= 120, diemTB >= 5, diem thi tot nghiep >= 5
    bool isTotNghiep() override
    {
        return tongTinChi >= 120 && diemTB >= 5 && diemThiTN >= 5;
    }

    // Input: Khong co
    // Output: False vi la sinh vien cao dang
    bool getLoaiSV() override
    {
        return false;
    }

    ~CaoDang() {}
};

