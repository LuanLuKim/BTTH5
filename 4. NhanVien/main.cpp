#include <iostream>
#include "QuanLyNV.h"

using namespace std;

int main() {
    QuanLyNV ql;
    ql.NhapDS();
    ql.XuatDS();
    ql.xuatNVLuongBeHonTB();
    ql.xuatNVMaxLuong();
    ql.xuatNVMinLuong();
    ql.xuatDevMaxLuong();
    ql.xuatTesterMinLuong();
    return 0;
}