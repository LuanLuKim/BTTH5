#include <iostream>
#include "QuanLyGD.h"
#include <iomanip>

using namespace std;


int main()
{
    QuanLyGD ql;
    ql.NhapDS();
    cout << "\n| -- -- -- -- -- DANH SACH GIAO DICH -- -- -- -- -- |\n";
    ql.XuatDS();

    cout << "\nSo luong GD Dat: " << ql.tinhTongSL(0);
    cout << "\nSo luong GD Nha pho: " << ql.tinhTongSL(1);
    cout << "\nSo luong GD Can ho: " << ql.tinhTongSL(2);

    cout << "\nTrung binh thanh tien GD Can ho: " << ql.tinhTBThanhTienCanHo();

    ql.timGDNhaPhoCaoNhat();

    cout << "\n\nDanh sach GD trong thang 12/2024:\n";
    ql.xuatGDDinhKy_12_2024();

    return 0;
}