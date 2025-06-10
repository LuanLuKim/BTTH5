#pragma once
#include "KhachHang.h"
class LoaiB : public KhachHang
{
private:
    int soNamThanThiet;
public:
    // Ham tao
    // Input: Khong co
    // Output: Khong co
    // Huong giai quyet: Tao gia tri mac dinh cho so nam than thiet
    LoaiB() { soNamThanThiet = 0; }

    void Nhap(istream& in) override;
    double TinhTien() override;

    ~LoaiB() override {}
};

