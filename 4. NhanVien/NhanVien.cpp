#include "NhanVien.h"

// Ham nhap thong tin nhan vien
// Input: Nhap thong tin tu ban phim
// Output: Khong co
// Huong giai quyet: Su dung cin va getline de doc du lieu
void NhanVien::Nhap() 
{
    cout << "Nhap ma nhan vien: "; getline(cin, maNV);
    cout << "Nhap ho ten: "; getline(cin, hoTen);

    do {
        cout << "Nhap tuoi: ";
        cin >> tuoi;
        if (tuoi <= 0) cout << "Tuoi khong hop le. Vui long nhap lai.\n";
    } while (tuoi <= 0);

    cin.ignore();
    cout << "Nhap so dien thoai: "; getline(cin, sdt);
    cout << "Nhap email: "; getline(cin, email);
    do {
        cout << "Nhap luong co ban: ";
        cin >> luongCB;
        if(luongCB <= 0) cout<<"Luong co ban khong hop le. Vui long nhap lai.\n"<<endl;
    } while (luongCB <= 0);
    cin.ignore();
}

// Ham xuat thong tin nhan vien
// Input: Khong co
// Output: Xuat ra man hinh thong tin cua nhan vien
// Huong giai quyet: Su dung cout va setw de in can le
void NhanVien::Xuat() 
{
    cout << setw(10) << left << maNV
        << setw(20) << left << hoTen << endl;
    cout << setw(10) << left << tuoi
        << setw(20) << left << sdt << endl;
    cout << setw(25) << left << email
        << setw(12) << left << luongCB;
}