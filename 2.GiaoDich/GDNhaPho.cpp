#include "GDNhaPho.h"
// Ham Nhap
/*
Input: Cac thong tin co ban va loai nha (cao cap hoac thuong), dia chi
Output: Khong co
Huong giai quyet: Goi GiaoDich::Nhap, sau do nhap loai nha va dia chi
*/
void GDNhaPho::Nhap() 
{
    GiaoDich::Nhap();
    bool temp;
    cout << "Loai nha (1: cao cap, 0: thuong): "; cin >> temp;
    loaiNha = temp;
    cout << "Dia chi: "; cin.ignore(); getline(cin, diaChi);
}

// Ham Xuat
/*
Input: Khong co
Output: Xuat thong tin giao dich nha pho ra man hinh
Huong giai quyet: Xuat thong tin tu lop GiaoDich va loai nha, dia chi
*/
void GDNhaPho::Xuat() 
{
    cout << "[Giao dich Nha pho] ";
    GiaoDich::Xuat();
    cout << "Loai nha: " << (loaiNha ? "Cao cap" : "Thuong") << endl;
    cout << "Dia chi: " << diaChi << endl;
    cout << "Thanh tien: " << thanhTien() << endl;
}

// Ham thanhTien
/*
Input: Khong co
Output: Tra ve gia tri thanh tien
Huong giai quyet:
- Neu cao cap: thanh tien = dien tich * don gia
- Neu thuong: thanh tien = dien tich * don gia * 0.9
*/
double GDNhaPho::thanhTien() 
{
    return loaiNha ? dienTich * donGia : dienTich * donGia * 0.9;
}