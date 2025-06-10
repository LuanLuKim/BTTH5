#include "LoaiC.h"

// Ham nhap thong tin tu file
// Input: ifstream& in
// Output: None
// Huong giai quyet: Goi lai ham Nhap cua KhachHang de doc thong tin khach hang loai A
void LoaiC::Nhap(istream& in)
{
    KhachHang::Nhap(in);
}

// Ham tinh tien (thuan ao)
// Input: Khong co
// Output: So tien phai tra
// Huong giai quyet: Tinh so tien phai tra theo cong thuc:
//                        So tien = So luong hang * Don gia * (100% - 50%) + VAT (10%)
double LoaiC::TinhTien()
{
    double tienHang = soLuongHang * donGia;
    return tienHang * 0.5 * 1.1;
}