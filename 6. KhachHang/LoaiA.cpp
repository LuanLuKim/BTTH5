#include "LoaiA.h"

// Ham nhap thong tin tu file 
// Input: ifstream& in (tep dau vao)
// Output: Khong co
// Huong giai quyet: Goi lai ham Nhap cua KhachHang de doc thong tin khach hang loai A
void LoaiA::Nhap(istream& in)
{
	KhachHang::Nhap(in);
}

// Ham tinh tien (thuan ao)
// Input: Khong co
// Output: So tien phai tra
// Huong giai quyet: Tinh so tien phai tra theo cong thuc:
//                        So tien = So luong hang * Don gia + VAT (10%)
double LoaiA::TinhTien() 
{
    double tienHang = soLuongHang * donGia;
    return tienHang * 1.1;
}