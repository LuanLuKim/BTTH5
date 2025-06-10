#include "LoaiB.h"

// Ham nhap thong tin tu file
// Input: ifstream& in
// Output: None
// Huong giai quyet: Doc thong tin khach hang loai B, them thong tin so nam than thiet
void LoaiB::Nhap(istream& in) 
{
    KhachHang::Nhap(in);
    in >> soNamThanThiet;
    in.ignore();
}

// Ham tinh tien (thuan ao)
// Input: Khong co
// Output: So tien phai tra
// Huong giai quyet: Tinh so tien phai tra theo cong thuc:
//                        Khuyen mai = So nam than thiet * 5%, Toi da 50%
//                        So tien = So luong hang * Don gia * (100% - Khuyen mai) + VAT (10%)
double LoaiB::TinhTien() 
{
    double khuyenMai = min(soNamThanThiet * 0.05, 0.5);
    double tienHang = soLuongHang * donGia;
    return tienHang * (1 - khuyenMai) * 1.1;
}