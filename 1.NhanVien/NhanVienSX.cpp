#include "NhanVienSX.h"
// Ham nhap
// Input: Luong co ban va so san pham tu ban phim
// Output: Cap nhat lai NhanVienSX
void NhanVienSX::Nhap()
{
	NhanVien::Nhap();
	do {
		cout << "Nhap luong co ban: "; cin >> luongCB;
		if (luongCB <= 0) cout << "Luong co ban khong the be hon 0. Vui long nhap lai." << endl;
	} while (luongCB <= 0);
	do {
		cout << "Nhap so san pham da san xuat: "; cin >> soSP;
		if (soSP <= 0) cout << "So san pham khong the be hon 0. Vui long nhap lai." << endl;
	} while (soSP <= 0);
	loaiNV = 1;
}
// Ham tinh luong
// Input: Khong co
// Output: Cap nhat lai luong
// Huong giai quyet: Luong = luongCB + soSP * 5000
void NhanVienSX::tinhLuong()
{
	luong = luongCB + soSP * 5000;
}