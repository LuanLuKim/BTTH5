#include "QuanLyKH.h"
#include "LoaiA.h"
#include "LoaiB.h"
#include "LoaiC.h"

// Ham huy
// Input: Khong co
// Output: Khong co
// Huong giai quyet: Huy danh sach khach hang, xoa cac doi tuong da cap phat dong
QuanLyKH::~QuanLyKH()
{
    for (auto kh : dsGS)
        delete kh;
    dsGS.clear();
}

// Ham nhap danh sach khach hang tu file
// Input: ifstream& in
// Output: None
// Huong giai quyet: Doc danh sach khach hang tu file, tao doi tuong tuong ung cho tung loai khach hang
void QuanLyKH::NhapDS(istream& in) 
{
    in >> sLKHA >> sLKHB >> sLKHC;
    in.ignore();

    for (int i = 0; i < sLKHA; ++i) 
    {
        KhachHang* kh = new LoaiA();
        kh->Nhap(in);
        dsGS.push_back(kh);
    }

    for (int i = 0; i < sLKHB; ++i)
    {
        KhachHang* kh = new LoaiB();
        kh->Nhap(in);
        dsGS.push_back(kh);
    }

    for (int i = 0; i < sLKHC; ++i) 
    {
        KhachHang* kh = new LoaiC();
        kh->Nhap(in);
        dsGS.push_back(kh);
    }
}

// Ham xuat danh sach khach hang ra file
// Input: ostream& out
// Output: None
// Huong giai quyet: Xuat danh sach khach hang ra output, moi khach in ho ten va so tien phai tra
void QuanLyKH::XuatDS(ostream& out)
{
    out << sLKHA << " " << sLKHB << " " << sLKHC << endl;
    for (auto kh : dsGS) 
    {
        kh->Xuat(out);
        out << fixed;
        out.precision(2);
        out << kh->TinhTien() << endl;
    }
}

// Ham xuat tong so tien ra file
// Input: ostream& out
// Output: None
// Huong giai quyet: Tinh tong so tien cong ty thu duoc tu tat ca cac khach hang va in ra output
void QuanLyKH::TongTien(ostream& out) 
{
    double tong = 0;
    for (auto kh : dsGS)
        tong += kh->TinhTien();
    out << tong << endl;
}