#pragma once
#include "De.h"
#include "Bo.h"
#include "Cuu.h"
#include <vector>
#include <iomanip>

class QuanLyGS
{
private:
    vector<GiaSuc*> dsGS;
    int soLuongGS;
public:
    QuanLyGS() { dsGS.clear(); soLuongGS = 0; }
    void NhapDS();
    void XuatDS();
    void ThongKe();

    ~QuanLyGS();
};

