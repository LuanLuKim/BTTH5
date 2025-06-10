#include "QuanLyNV.h"
// Ham nhap danh sach nhan vien
// Input: Nhap so luong nhan vien va thong tin nhan vien tu ban phim
// Output: Khong co
// Huong giai quyet: Duyen qua tung phan tu, thay doi thuoc tinh cho phu hop va goi ham Nhap
void QuanLyNV:: NhapDSNV()
{
	cout << "Nhap so luong nhan vien: "; cin >> soLuongNV;
	dsNV.clear();
	dsNV.resize(soLuongNV);
	for (int i = 0; i < soLuongNV; i++)
	{
		bool loaiNV;
		cout << "Nhap loai nhan vien muon dien thong tin (1 - NV san xuat/ 0 - NV van phong): ";
		cin >> loaiNV;
		if (loaiNV) dsNV[i] = new NhanVienSX();
		else dsNV[i] = new NhanVienVP();

		dsNV[i]->Nhap();
		dsNV[i]->tinhLuong();
	}
}
// Ham xuat danh sach nhan vien
// Input: Khong co
// Output: Thong tin nhan vien ra man hinh
// Huong giai quyet: Duyen qua tung phan tu va goi ham Xuat
void QuanLyNV::XuatDSNV()
{
	if (soLuongNV == 0)
	{
		cout << "Danh sach rong."<<endl;
		return;
	}
	for (int i = 0; i < soLuongNV; i++)
	{
		dsNV[i]->Xuat();
	}
}
// Ham tinh tong luong:
// Input: Khong co
// Output: Tong so luong cong ty can tra
// Huong giai quyet: Duyet qua tung phan tu cap nhat them vao tong luong
int QuanLyNV::tongLuong()
{
	int sumLuong = 0;
	for (int i = 0; i < soLuongNV; i++)
	{
		sumLuong += dsNV[i]->getLuong();
	}
	return sumLuong;
}
// Ham xuat nhan vien san xuat co luong nho nhat
// Input: Khong co
// Output: Thong tin nhan vien san xuat co luong nho nhat ra man hinh
// Huong giai quyet: Duyen qua tung phan tu, tim vi tri nhan vien san xuat co luong nho nhat. Xuat nhan vien do ra
//					 Neu danh sach khong co nhan vien san xuat thi xuat thong bao "Khong co nhan vien san xuat trong danh sach."
void QuanLyNV::XuatNVSXLuongMin()
{
	if (soLuongNV == 0)
	{
		cout << "Danh sach rong." << endl;
		return;
	}
	bool found = 0;
	int iLuongMin = -1;
	for (int i = 1; i < soLuongNV; i++)
	{
		if (!dsNV[i]->getLoaiNV()) continue;
		if (dsNV[i]->getLoaiNV() && !found)
		{
			found = 1;
			iLuongMin = i;
			continue;
		}
		if (dsNV[i]->getLuong() < dsNV[iLuongMin]->getLuong())
			iLuongMin = i;
	}
	if (found)
		dsNV[iLuongMin]->Xuat();
	else
		cout << "Khong co nhan vien san xuat trong danh sach.\n";
}
// Ham xuat nhan vien van phong co tuoi lon nhat
// Input: Khong co
// Output: Thong tin nhan vien van phong co tuoi lon nhat ra man hinh
// Huong giai quyet: Duyen qua tung phan tu, tim vi tri nhan vien van phong co tuoi lon nhat. Xuat nhan vien do ra
//					 Neu danh sach khong co nhan vien van phong thi xuat thong bao "Khong co nhan vien van phong trong danh sach."
void QuanLyNV::XuatNVVPTuoiMax()
{
	if (soLuongNV == 0)
	{
		cout << "Danh sach rong." << endl;
		return;
	}
	int iTuoiMax = -1;
	bool found = 0;
	for (int i = 1; i < soLuongNV; i++)
	{
		if (dsNV[i]->getLoaiNV()) continue;
		if (!dsNV[i]->getLoaiNV() && !found)
		{
			found = 1;
			iTuoiMax = i;
			continue;
		}
		if ((dsNV[i]->getNgaySinh()).nam < (dsNV[iTuoiMax]->getNgaySinh()).nam)
			iTuoiMax = i;
	}
	if (found)
		dsNV[iTuoiMax]->Xuat();
	else cout << "Khong co nhan vien van phong trong danh sach.\n";
}
