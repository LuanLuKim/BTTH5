#include "QuanLyGS.h"


void QuanLyGS::NhapDS()
{
    cout << "Nhap so luong gia suc ma trang trai co: "; cin >> soLuongGS;
    dsGS.clear();
    for (int i = 0; i < soLuongGS; i++)
    {
        GiaSuc* dv;
        int loai;
        cout << "Nhap loai gia suc (1 = Bo, 2 = Cuu, 3 = De): "; cin >> loai;

        if (loai == 1)
            dv = new Bo();
        else if (loai == 2)
            dv = new Cuu();
        else
            dv = new De();
        dsGS.push_back(dv);
    }
}

void QuanLyGS::XuatDS()
{
    cout << "\nTat ca gia suc keu vi doi:\n";
    for (int i = 0; i < soLuongGS; i++) dsGS[i]->Keu();
}

void QuanLyGS::ThongKe()
{
    int tongBoCon = 0, tongCuuCon = 0, tongDeCon = 0;
    double tongSuaBo = 0, tongSuaCuu = 0, tongSuaDe = 0;
    int soBo = 0, soCuu = 0, soDe = 0;

    for (int i = 0; i<soLuongGS; i++)
    {
        switch (dsGS[i]->getLoai())
        {
        case 1:
        {
            soBo++;
            tongBoCon += dsGS[i]->SinhCon();
            tongSuaBo += dsGS[i]->ChoSua();
            break;
        }
        case 2:
        {
            soCuu++;
            tongCuuCon += dsGS[i]->SinhCon();
            tongSuaCuu += dsGS[i]->ChoSua();
            break;
        }
        default:
            soDe++;
            tongDeCon += dsGS[i]->SinhCon();
            tongSuaDe += dsGS[i]->ChoSua();
            break;
        }
    }
    cout << "\nThong ke sau mot lua sinh va mot luoc cho sua:\n";
    cout << "So luong Bo: " << soBo << "\n";
    cout << "So luong Cuu: " << soCuu << "\n";
    cout << "So luong De: " << soDe << "\n";
    cout << "Tong so con sinh ra: " << tongBoCon+tongCuuCon+tongDeCon << "\n";

    cout << "So bo con: " << setw(10) << left << tongBoCon
        << " So cuu con: " << setw(10) << left << tongCuuCon
        << " So de con: " << setw(10) << left << tongDeCon;
    cout << "Tong so lit sua thu duoc: " << tongSuaBo+tongSuaCuu+tongSuaDe << "\n";

    cout << "Sua bo: " << setw(10) << left << tongBoCon
        << " Sua cuu: " << setw(10) << left << tongCuuCon
        << " So de: " << setw(10) << left << tongDeCon;
}

QuanLyGS:: ~QuanLyGS()
{
    for (GiaSuc* gs : dsGS)
        delete gs;
    dsGS.clear();
}
