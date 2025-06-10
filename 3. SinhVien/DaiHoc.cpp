#include "DaiHoc.h"

// Input: Thong tin sinh vien dai hoc nhap tu ban phim
// Output: Khong co
// Huong giai quyet: Goi lai SinhVien::Nhap() va nhap them diem luan van, ten luan van
void DaiHoc::Nhap() 
{
    SinhVien::Nhap();
    cin.ignore();
    cout << "Nhap ten luan van: ";
    getline(cin, tenLuanVan);
    cout << "Nhap diem luan van: ";
    cin >> diemLuanVan;
}

// Input: Khong co
// Output: In ra thong tin sinh vien dai hoc
// Huong giai quyet: Goi lai SinhVien::Xuat() va xuat them diem luan van, ten luan van
void DaiHoc::Xuat() 
{
    SinhVien::Xuat();
    cout << "Ten luan van: " << tenLuanVan << endl;
    cout << "Diem luan van: " << diemLuanVan << endl;
}
