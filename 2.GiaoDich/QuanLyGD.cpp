#include "QuanLyGD.h"
#include "GDDat.h"
#include "GDNhaPho.h"
#include "GDCanHo.h"
#include <iostream>

// Ham NhapDS
/*
Input: Danh sach cac giao dich duoc nhap tu ban phim
Output: Them cac con tro giao dich vao vector dsGD
Huong giai quyet: Nhap so luong, chon loai, cap phat doi tuong dong va nhap du lieu
*/
void QuanLyGD::NhapDS() 
{
    dsGD.clear();
    cout << "Nhap so giao dich: "; cin >> soLuong;
    for (int i = 0; i < soLuong; ++i) 
    {
        int loai;
        cout << "Nhap loai giao dich (1. Dat, 2. Nha pho, 3. Can ho): ";
        cin >> loai;
        GiaoDich* gd = nullptr;
        if (loai == 1) gd = new GDDat();
        else if (loai == 2) gd = new GDNhaPho();
        else gd = new GDCanHo();
        gd->Nhap();
        dsGD.push_back(gd);
    }
}
// Ham XuatDS
/*
Input: Khong co
Output: Hien thi danh sach giao dich ra man hinh
Huong giai quyet: Duyet vector dsGD va goi ham Xuat tung phan tu
*/
void QuanLyGD::XuatDS() 
{
    for (auto gd : dsGD)
        gd->Xuat();
    if (soLuong == 0)
        cout << "Danh sach rong." << endl;
}
// Ham tinhTongSL
/*
Input: Khong co
Output: So luong cua tung loai giao dich
Huong giai quyet: Duyet dsGD, phan biet va dem tung loai bang getLoaiGD
*/
int QuanLyGD::tinhTongSL(int loai) 
{
    int count = 0;
    for (auto gd : dsGD)
        if (gd->getLoaiGD() == loai)
            count++;
    return count;
}

// Ham tinhTBThanhTienCanHo
/*
Input: Khong co
Output: Gia tri trung binh thanh tien cua giao dich can ho
Huong giai quyet: Tinh tong thanh tien roi chia trung binh
*/
double QuanLyGD::tinhTBThanhTienCanHo() 
{
    double sum = 0;
    for (auto gd : dsGD) 
    {
        if (gd->getLoaiGD() == 2) 
        {
            sum += gd->thanhTien();
        }
    }
    return soLuong == 0 ? 0 : sum / soLuong;
}

// Ham timGDNhaPhoCaoNhat
/*
Input: Khong co
Output: Xuat giao dich nha pho co thanh tien cao nhat hoac thong bao khong co
Huong giai quyet: Duyet dsGD va tim max trong cac giao dich nha pho (Neu co)
*/
void QuanLyGD::timGDNhaPhoCaoNhat() 
{
    GiaoDich* maxGD = NULL;
    double maxVal = -1;
    for (auto gd : dsGD) 
    {
        if (gd->getLoaiGD() == 1) 
        {
            double val = gd->thanhTien();
            if (val > maxVal) 
            {
                maxVal = val;
                maxGD = gd;
            }
        }
    }
    if (maxGD != NULL) 
    {
        cout << "\nGiao dich Nha pho co thanh tien cao nhat:\n";
        maxGD->Xuat();
    }
    else
        cout << "\nKhong co giao dich nha pho nao.\n";
}

// Ham xuatGDThang12_2024
/*
Input: Khong co
Output: Hien thi cac giao dich co ngay trong thang 12 nam 2024
Huong giai quyet: Duyet dsGD, tach ngay/thang/nam va kiem tra dieu kien
*/
void QuanLyGD::xuatGDDinhKy_12_2024() 
{
    for (auto gd : dsGD) 
    {
        string ngay = gd->getNgayGD();
        if (ngay.length() >= 10 && ngay.substr(3, 2) == "12" && ngay.substr(6, 4) == "2024")
            gd->Xuat();
    }
}

QuanLyGD::~QuanLyGD() 
{
    for (auto gd : dsGD)
        delete gd;
}