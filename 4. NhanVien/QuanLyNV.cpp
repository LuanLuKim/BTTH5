#include "QuanLyNV.h"

QuanLyNV::QuanLyNV() 
{
    soLuongNV = 0;
}

QuanLyNV::~QuanLyNV() 
{
    for (NhanVien* nv : dsNV)
        delete nv;
    dsNV.clear();
}

void QuanLyNV::NhapDS()
{
    cout << "Nhap so luong nhan vien: ";
    cin >> soLuongNV;
    dsNV.clear(); dsNV.resize(soLuongNV);
    cin.ignore();
    for (int i = 0; i < soLuongNV; i++) 
    {
        int loai;
        cout << "Chon loai nhan vien (1 = Dev, 0 = Tester): ";
        cin >> loai;
        cin.ignore();
        NhanVien* NV;
        if (loai == 1) 
            NV = new Dev();

        else  
            NV = new Tester();
        NV->Nhap();
        dsNV[i] = NV;
    }
}

void QuanLyNV::XuatDS() 
{
    if (soLuongNV == 0)
    {
        cout << "Danh sach rong." << endl;
        return;
    }
    cout << "\n=== Danh sach nhan vien ===\n";
    for (NhanVien* nv : dsNV)
        nv->Xuat();
}

void QuanLyNV::xuatNVLuongBeHonTB() 
{
    if (soLuongNV == 0) return;
    double tongLuong = 0;
    for (NhanVien* nv : dsNV) 
        tongLuong += nv->tinhLuong();
    double luongTB = tongLuong / soLuongNV;
    cout << "\nLuong trung binh: " << luongTB << endl;
    cout << "\n=== Nhan vien co luong thap hon luong trung binh ===\n";
    for (NhanVien* nv : dsNV) 
    {
        if (nv->tinhLuong() < luongTB)
            nv->Xuat();
    }
}

void QuanLyNV::xuatNVMaxLuong()
{
    if (soLuongNV == 0) return;
    NhanVien* maxNV = dsNV[0];
    for (NhanVien* nv : dsNV) 
    {
        if (nv->tinhLuong() > maxNV->tinhLuong())
            maxNV = nv;
    }
    cout << "\n=== NV co luong cao nhat ===\n";
    maxNV->Xuat();
}

void QuanLyNV::xuatNVMinLuong() 
{
    if (soLuongNV == 0) return;
    NhanVien* minNV = dsNV[0];
    for (NhanVien* nv : dsNV) 
    {
        if (nv->tinhLuong() < minNV->tinhLuong())
            minNV = nv;
    }
    cout << "\n=== NV co luong thap nhat ===\n";
    minNV->Xuat();
}

void QuanLyNV::xuatDevMaxLuong() 
{
    int maxIndex = -1;
    double maxLuong = -1;
    for (int i = 0; i< soLuongNV; i++)
    {
        if (dsNV[i]->getLoaiNV() && dsNV[i]->tinhLuong() > maxLuong)
        {
            maxIndex = i;
            maxLuong = dsNV[i]->tinhLuong();
        }
    }
    cout << "\n=== Dev co luong cao nhat ===\n";
    if (maxIndex == -1)
        cout << "Danh sach khong co lap trinh vien.\n";

    dsNV[maxIndex]->Xuat();
}

void QuanLyNV::xuatTesterMinLuong()
{
    int minIndex = -1;
    double minLuong = -1;
    for (int i = 0; i < soLuongNV; i++)
    {
        if (!dsNV[i]->getLoaiNV())
        {
            if (minLuong == -1 || (dsNV[i]->tinhLuong() < minLuong))
            {
                minIndex = i;
                minLuong = dsNV[i]->tinhLuong();
            }
        }
    }

    cout << "\n=== Dev co luong cao nhat ===\n";
    if (minIndex == -1)
        cout << "Danh sach khong co kiem chhung vien.\n";

    dsNV[minIndex]->Xuat();
}