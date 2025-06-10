#pragma once
#include "KhachHang.h"
class LoaiC : public KhachHang
{
public:
    LoaiC() {}
    void Nhap(istream& in) override;
    double TinhTien() override;

    ~LoaiC() override {}
};

