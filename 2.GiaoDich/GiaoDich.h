#pragma once
#include <iostream>
#include <string>

using namespace std;

class GiaoDich
{
protected:
    string maGD, ngayGD;
    int donGia;
    double dienTich;

public:
    GiaoDich() : maGD(""), ngayGD(""), donGia(0), dienTich(0.0) {}
    virtual void Nhap();
    virtual void Xuat();

    // Ham thanhTien (thuan ao)
    /*
    Input: Khong co
    Output: Gia tri thanh tien cua giao dich
    Huong giai quyet: Ham ao tinh thanh tien, duoc override o lop con
    */
    virtual double thanhTien() = 0;

    // Ham getNgayGD
    /*
    Input: khong co
    Output: Ngay giao dich
    Huong giai quyet: Tra ve gia tri bien ngayGD
    */
    string getNgayGD() { return ngayGD; }

    // Ham getLoaiGD
    /*
    Input: Khong co
    Output: Tra ve loai giao dich (0 = dat, 1 = nha pho, 2 = can ho)
    Huong giai quyet: Ham ao thuan, duoc override o lop con
    */
    virtual int getLoaiGD() = 0;
    virtual ~GiaoDich() {}
};

