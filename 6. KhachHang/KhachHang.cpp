#include "KhachHang.h"

// Ham nhap thong tin tu file (ao)
// Input: ifstream& in (tep dau vao)
// Output: Khong co
// Huong giai quyet: Doc thong tin khach hang tu file
void KhachHang::Nhap(istream& in)
{
    getline(in, hoTen);
    in >> soLuongHang >> donGia;
    in.ignore();
}

// Ham xuat thong tin ra file
// Input: ostream& out (tep hoac man hinh)
// Output: Khong co
// Huong giai quyet: Xuat ho ten khach hang ra output
void KhachHang::Xuat(ostream& out) 
{
    out << hoTen << endl;
}