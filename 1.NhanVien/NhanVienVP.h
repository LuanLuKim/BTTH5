#pragma once
#include "NhanVien.h"
class NhanVienVP : public NhanVien
{
private:
	int soNgayLV;
public:
	NhanVienVP(){}
	void Nhap() override;
	void tinhLuong() override;
	~NhanVienVP(){}
};

