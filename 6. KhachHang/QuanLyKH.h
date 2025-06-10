#pragma once
#include <vector>
#include "KhachHang.h"

class QuanLyKH
{
private:
    vector<KhachHang*> dsGS;
    int sLKHA, sLKHB, sLKHC;
public:
    QuanLyKH() : sLKHA(0), sLKHB(0), sLKHC(0) {}

    void NhapDS(istream& in);
    void XuatDS(ostream& out);
    void TongTien(ostream& out);

    ~QuanLyKH();
};

