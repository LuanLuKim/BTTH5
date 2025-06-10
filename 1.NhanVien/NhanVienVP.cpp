#include "NhanVienVP.h"
// Ham nhap
// Input: So ngay lam viec tu ban phim
// Output: Cap nhat lai NhanVienVP
void NhanVienVP:: Nhap()
{
	NhanVien::Nhap();
	do {
		cout << "Nhap so ngay lam viec: ";
		cin >> soNgayLV;
		if (soNgayLV <= 0) cout << "So ngay khong the be hon 0. Vui long nhap lai." << endl;
	} while (soNgayLV <= 0);
	loaiNV = 0;
}
// Ham tinh luong
// Input: Khong co
// Output: Cap nhat lai luong
// Huong giai quyet: Luong = soNgayLV * 100000
void NhanVienVP:: tinhLuong()
{
	luong= soNgayLV * 100000;
}
