#pragma once
#include "Dev.h"
#include "Tester.h"
#include <vector>

class QuanLyNV
{
private:
    std::vector<NhanVien*> dsNV;
    int soLuongNV;
public:
    QuanLyNV();

    // Ham nhap danh sach nhan vien
    // Input: nhap soLuongNV va thong tin tung NV
    // Output: luu thong tin NV vao dsNV
    // Huong giai quyet: voi moi NV, chon loai va goi Nhap tuong ung
    void NhapDS();

    // Ham xuat danh sach nhan vien
    // Input: dsNV da co du lieu
    // Output: hien thi danh sach NV voi tat ca thong tin
    // Huong giai quyet: in tieu de va goi Xuat tren tung NV
    void XuatDS();

    // Ham xuat nhan vien co luong be hhon trung binh
    // Input: dsNV
    // Output: hien thi NV co luong thap hon luong trung binh
    // Huong giai quyet: tinh luong trung binh, sau do loc va in
    void xuatNVLuongBeHonTB();

    // Ham xuat nhan vien co luong lon nhat
    // Input: dsNV
    // Output: hien thi NV co luong cao nhat
    // Huong giai quyet: tim max va in thong tin
    void xuatNVMaxLuong();

    // Ham xuat nhan vien co luong nho nhat
    // Input: dsNV
    // Output: hien thi NV co luong thap nhat
    // Huong giai quyet: tim min va in thong tin
    void xuatNVMinLuong();

    // Ham xuat lap trinh vien co luong lon nhat
    // Input: dsNV
    // Output: hien thi Dev co luong cao nhat
    // Huong giai quyet: loc Dev, tim max va in
    void xuatDevMaxLuong();

    // Ham xuat kiem chung vien co luong nho nhat
    // Input: dsNV
    // Output: hien thi Tester co luong thap nhat
    // Huong giai quyet: loc Tester, tim min va in
    void xuatTesterMinLuong();

    ~QuanLyNV();

};

