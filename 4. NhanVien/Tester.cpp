#include "Tester.h"

// Ham nhap thong tin kiem chung vien
// Input: Nhap thong tin chung va so luong loi
// Output: Khong co
// Huong giai quyet: Goi Nhap cua NhanVien roi nhap them so luong loi
void Tester::Nhap() 
{
    NhanVien::Nhap();
    do {
        cout << "Nhap so loi phat hien: ";
        cin >> numOfBugs;
        if (numOfBugs < 0) cout << "So loi phat hien khong hop le. Vui long nhap lai.\n";
    } while (numOfBugs < 0);
    {

    }
    cin.ignore();
}
// Ham xuat thong tin kiem chung vien
// Input: Khong co
// Output: Hien thi thong tin chung, so luong loi, luong
// Huong giai quyet: Goi Xuat cua NhanVien roi hien thong tin rieng
void Tester::Xuat()
{
    cout << "[KIEM CHUNG VIEN]" << endl;
    NhanVien::Xuat();
    cout << "So loi phat hien: " << numOfBugs << endl;
    cout << "Luong: " << tinhLuong() << endl;
}