#pragma once
#include <vector>
#include "GiaoDich.h"

using namespace std;

class QuanLyGD
{
private:
    vector<GiaoDich*> dsGD;
    int soLuong;
public:
    QuanLyGD() { soLuong = 0; }
    void NhapDS();
    void XuatDS();
    int tinhTongSL(int loai);
    double tinhTBThanhTienCanHo();
    void timGDNhaPhoCaoNhat();
    void xuatGDDinhKy_12_2024();
    ~QuanLyGD();
};

