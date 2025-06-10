#pragma once
#include <iostream>
#include <vector>
#include "NhanVienSX.h"
#include "NhanVienVP.h"

using namespace std;
class QuanLyNV
{
private:
	vector<NhanVien*> dsNV;
	int soLuongNV;
public:
	QuanLyNV(){}
	void NhapDSNV();
	void XuatDSNV();
	int tongLuong();
	void XuatNVSXLuongMin();
	void XuatNVVPTuoiMax();
	~QuanLyNV(){}
};

