#pragma once
#include "SinhVien.h"
#include "CaoDang.h"
#include "DaiHoc.h"
#include <vector>

class QuanLySV
{
private:
    vector<SinhVien*> dsSV;
    int soLuongSV;

public:
    QuanLySV();

    void NhapDS();
    void XuatDS();

    void XuatSVDuDK();
    void XuatSVKoDuDK();

    void XuatSVDHDTBMax();
    void XuatSVCDDTBMax();

    void XuatSLKoDuDKMoiLoai();

    ~QuanLySV();
};

