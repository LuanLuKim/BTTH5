#pragma once
#include "GiaoDich.h"
class GDNhaPho : public GiaoDich
{
private:
    bool loaiNha;
    string diaChi;

public:
    GDNhaPho() : loaiNha(false), diaChi(""){}
    void Nhap() override;
    void Xuat() override;
    double thanhTien() override;
    // Ham getLoaiGD
    /*
    Input: Khong co
    Output: 1 (Dai dien cho giao dich nha pho)
    */
    int getLoaiGD() override { return 1; }
    ~GDNhaPho(){}
};

