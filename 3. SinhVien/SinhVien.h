#pragma once
#include <iostream>
#include <string>

using namespace std;
class SinhVien
{
protected:
    string maSV, hoTen, diaChi;
    int tongTinChi;
    double diemTB;

public:
    SinhVien() { tongTinChi = 0; diemTB = 0; }

    virtual void Nhap();
    virtual void Xuat();

    // Input: Khong co
    // Output: True neu sinh vien du tot nghiep, nguoc lai false
    // Huong giai quyet: Ham ao tinh chat truu tuong, se duoc override boi cac lop con
    virtual bool isTotNghiep() = 0;

    // Input: Khong co
    // Output: True neu la sinh vien dai hoc, false neu la sinh vien cao dang
    // Huong giai quyet: Ham ao tinh chat truu tuong, se duoc override boi cac lop con
    virtual bool getLoaiSV() = 0;

    // Input: Khong co
    // Output: Diem trung binh cua sinh vien
    double getDiemTB() { return diemTB; }

    virtual ~SinhVien() {}
};

