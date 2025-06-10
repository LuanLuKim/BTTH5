#pragma once
#include "GiaoDich.h"
class GDCanHo : public GiaoDich
{
private:
    string maCan;
    int tang;

public:
    GDCanHo() : maCan(""), tang(0) {}
    void Nhap() override;
    void Xuat() override;
    double thanhTien() override;
    // Ham getLoaiGD
    /*
    Input: Khong co
    Output: 2 (Dai dien cho giao dich can ho)
    */
    int getLoaiGD() override { return 2; }
    ~GDCanHo(){}
};

