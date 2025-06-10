#include "SinhVien.h"

// Input: Thong tin sinh vien nhap tu ban phim
// Output: Khong co
// Huong giai quyet: Dung cin de nhap cac thong tin cua sinh vien
void SinhVien::Nhap()
{
    cout << "Nhap ma SV: ";
    cin >> maSV;
    cin.ignore();
    cout << "Nhap ho ten: ";
    getline(cin, hoTen);
    cout << "Nhap dia chi: ";
    getline(cin, diaChi);
    cout << "Nhap tong tin chi: ";
    cin >> tongTinChi;
    cout << "Nhap diem trung binh: ";
    cin >> diemTB;
}

// Input: Khong co
// Output: In ra thong tin sinh vien
// Huong giai quyet: Dung cout de xuat thong tin theo chuan
void SinhVien::Xuat()
{
    cout << "Ma sinh vien: " << maSV << endl;
    cout << "Ho ten : " << hoTen << endl;
    cout << "Dia chi : " << diaChi << endl;
    cout << "Tin chi : " << tongTinChi << endl;
    cout << "Diem trung binh: " << diemTB << endl;
}