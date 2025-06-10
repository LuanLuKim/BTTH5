#include <iostream>
#include <vector>
#include "QuanLyNV.h"

using namespace std;


int main()
{
	QuanLyNV dsNV;
	dsNV.NhapDSNV();
	dsNV.XuatDSNV();
	cout << dsNV.tongLuong();
	dsNV.XuatNVSXLuongMin();
	dsNV.XuatNVVPTuoiMax();
}