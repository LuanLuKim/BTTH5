#include <iostream>
#include <fstream>
#include "QuanLyKH.h"

int main()
{
    ifstream fin("XYZ.INP");
    ofstream fout("XYZ.OUT");

    QuanLyKH ql;
    ql.NhapDS(fin);
    ql.XuatDS(fout);
    ql.TongTien(fout);

    fin.close();
    fout.close();

    return 0;
}
