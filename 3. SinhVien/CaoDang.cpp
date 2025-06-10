#include "CaoDang.h"

// Input: Thong tin sinh vien cao dang nhap tu ban phim
// Output: Khong co
// Huong giai quyet: Goi lai SinhVien::Nhap() va nhap them diem thi tot nghiep
void CaoDang::Nhap() 
{
    SinhVien::Nhap();
    cout << "Nhap diem thi tot nghiep: ";
    cin >> diemThiTN;
}

// Input: Khong co
// Output: In ra thong tin sinh vien cao dang
// Huong giai quyet: Goi lai SinhVien::Xuat() va xuat them diem thi tot nghiep
void CaoDang::Xuat() 
{
    cout << "[Sinh vien Cao dang]" << endl;
    SinhVien::Xuat();
    cout << "Diem thi tot nghiep: " << diemThiTN<<endl;
}
