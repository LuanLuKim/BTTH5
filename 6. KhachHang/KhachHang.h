#pragma once
#include <iostream>
#include <string>
using namespace std;

class KhachHang
{
protected:
    string hoTen;
    int soLuongHang;
    int donGia;

public:
    // Ham tao
    // Input: Khong co
    // Output: Khong co
    // Huong giai quyet: Tao gia tri mac dinh cho cac thuoc tinh
    KhachHang() : hoTen(""), soLuongHang(0), donGia(0) {}

    virtual void Nhap(istream& in);
    virtual void Xuat(ostream& out);
    // Ham tinh tien (thuan ao)
    // Input: Khong co
    // Output: So tien phai tra
    // Huong giai quyet: Ham ao tinh so tien phai tra cua khach hang, override o cac lop con
    virtual double TinhTien() = 0;

    // Ham huy (ao)
    // Input: Khong co
    // Output: Khong co
    // Huong giai quyet: Dung ham huy ao de co the giai phong bo nho khi dung thong quan KhachHang*
    virtual ~KhachHang() {}

};

