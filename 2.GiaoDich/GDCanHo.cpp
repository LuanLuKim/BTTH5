#include "GDCanHo.h"
// Ham Nhap
/*
Input: Cac thong tin co ban cung voi ma can ho va tang
Output: Khong co
Huong giai quyet: Goi GiaoDich::Nhap roi nhap thong tin rieng cua can ho
*/
void GDCanHo::Nhap() 
{
    GiaoDich::Nhap();
    cout << "Ma can ho: "; cin >> maCan;
    cout << "Tang: "; cin >> tang;
}

// Ham Xuat
/*
Input: Khong co
Output: Xuat thong tin giao dich can ho ra man hinh
Huong giai quyet: Xuat thong tin co ban va ma can ho, tang
*/
void GDCanHo::Xuat() 
{
    cout << "[Giao dich Can ho] ";
    GiaoDich::Xuat();
    cout << "Ma can: " << maCan << endl;
    cout << "Tang: " << tang << endl;
    cout << "Thanh tien: " << thanhTien() << endl;
}

// Ham thanhTien
/*
Input: Khong co
Output: Tra ve gia tri thanh tien
Huong giai quyet:
- Tang 1: thanh tien = dien tich * don gia * 2
- Tang >=15: thanh tien = dien tich * don gia * 1.2
- Cac tang con lai: thanh tien = dien tich * don gia
*/
double GDCanHo::thanhTien() 
{
    if (tang == 1) return dienTich * donGia * 2;
    if (tang >= 15) return dienTich * donGia * 1.2;
    return dienTich * donGia;
}