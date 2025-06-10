#pragma once
#include "GiaoDich.h"
class GDDat : public GiaoDich
{
private:
    char loaiDat;

public:
    GDDat() { loaiDat = 'A'; }
    void Nhap() override;
    void Xuat() override;
    double thanhTien() override;
    // Ham getLoaiGD
    /*
    Input: khong co
    Output: 0 (Dai dien cho giao dich dat)
    */
    int getLoaiGD() override { return 0; }
    ~GDDat(){}
};

