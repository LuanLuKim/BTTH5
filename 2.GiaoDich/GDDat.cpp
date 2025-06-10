#include "GDDat.h"
// Ham Nhap
/*
Input: Cac thong tin co ban va loai dat (A, B, C)
Output: Khong co
Huong giai quyet: Goi lai GiaoDich::Nhap de nhap chung, sau do nhap loai dat rieng
*/
void GDDat::Nhap() 
{
    GiaoDich::Nhap();
    cout << "Nhap loai dat (A/B/C): "; cin >> loaiDat;
}
// Ham Xuat
/*
Input: Khong co
Output: Xuat thong tin giao dich dat ra man hinh
Huong giai quyet: Goi lai GiaoDich::Xuat, sau do xuat them loai dat
*/

void GDDat::Xuat() 
{
    cout << "[Giao dich Dat] ";
    GiaoDich::Xuat();
    cout << "Loai dat: " << loaiDat << endl;
    cout << "Thanh tien: " << thanhTien() << endl;
}
// Ham thanhTien
/*
Input: Khong co
Output: Tra ve gia tri thanh tien
Huong giai quyet:
- Neu loai dat A: thanh tien = dien tich * don gia * 1.5
- Neu loai dat B, C: thanh tien = dien tich * don gia
*/
double GDDat::thanhTien() 
{
    if (loaiDat == 'A' || loaiDat == 'a')
        return dienTich * donGia * 1.5;
    return dienTich * donGia;
}