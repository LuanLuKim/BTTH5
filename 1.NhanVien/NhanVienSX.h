#pragma once
#include "NhanVien.h"
class NhanVienSX : public NhanVien
{
private:
	int luongCB;
	int soSP;
public:
	NhanVienSX() {}
	void Nhap() override;
	void tinhLuong() override;
	~NhanVienSX() {}
};

