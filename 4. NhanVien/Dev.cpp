#include "Dev.h"

// Ham nhap thong tin lap trinh vien
// Input: Nhap thong tin chung va so gio overtime
// Output: Khong co
// Huong giai quyet: Goi Nhap cua NhanVien roi nhap them overtime
void Dev::Nhap() 
{
    NhanVien::Nhap();
    do {
        cout << "Nhap so gio overtime: ";
        cin >> overtimes;
        if (overtimes < 0) cout << "So gio khong hop le. Vui long nhap lai.\n";
    } while (overtimes < 0);
    cin.ignore();
}

// Ham xuat thong tin lap trinh vien
// Input: Khong co
// Output: Hien thi thong tin chung, overtime, luong
// Huong giai quyet: Goi Xuat cua NhanVien roi hien thong tin rieng
void Dev::Xuat() 
{
    cout << "[LAP TRINH VIEN]" << endl;
    NhanVien::Xuat();
    cout << "So gio overtime: " << overtimes << endl;
    cout << "Luong: " << tinhLuong() << endl;
}