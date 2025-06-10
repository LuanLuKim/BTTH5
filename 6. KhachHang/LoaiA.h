#pragma once
#include "KhachHang.h"
class LoaiA : public KhachHang
{
public:
    LoaiA() {}
    void Nhap(istream& in) override;
    double TinhTien() override;

    ~LoaiA() override {}
};

