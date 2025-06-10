#include "GiaoDich.h"

// Ham Nhap
/*
Input: Thong tin ma giao dich, ngay giao dich, don gia, dien tich tu ban phim
Output: Khong co
Huong giai quyet: Dung cin va luu vao tung thuoc tinh
*/
void GiaoDich::Nhap() 
{
    cout << "Nhap ma GD: "; cin >> maGD;
    cout << "Nhap ngay GD (dd/mm/yyyy): "; cin >> ngayGD;
    cout << "Nhap don gia: "; cin >> donGia;
    cout << "Nhap dien tich: "; cin >> dienTich;
}
// Ham Xuat
/*
Input: Khong co
Output: Xuat cac thong tin cua giao dich ra man hinh
Huong giai quyet: Dung cout de xuat cac bien thanh vien
*/
void GiaoDich::Xuat() 
{
    cout << "Ma GD: " << maGD << endl;
    cout << "Ngay GD: " << ngayGD << endl;
    cout << "Don gia: " << donGia << endl;
    cout << "Dien tich: " << dienTich<<endl;
}