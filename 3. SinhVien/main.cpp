#include <iostream>
#include "QuanLySV.h"

using namespace std;


int main()
{
    QuanLySV qlsv;

    qlsv.NhapDS();
    qlsv.XuatDS();


    qlsv.XuatSVDuDK();
    qlsv.XuatSVKoDuDK();
    qlsv.XuatSVDHDTBMax();
    qlsv.XuatSVCDDTBMax();

    qlsv.XuatSLKoDuDKMoiLoai();

    return 0;
}