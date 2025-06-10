#pragma once
#include "GiaSuc.h"
class Cuu : public GiaSuc
{
public:

    // Ham phat am thanh cua cuu
    // Input: Khong co
    // Output: In ra tieng con cuu keu
    // Huong giai quyet: Dung cout xuat ra "Cuu: Be be be!"
    void Keu() override 
    {
        cout << "Cuu: Be be be!" << endl;
    }

    // Ham tinh so luong con duoc sinh cua loai cuu
    // Input: Khong co
    // Output: Tra ve so luong con cuu duoc sinh ra (0 - 2)
    // Huong giai quyet: Dung ham rand de tao ngau nhien so con
    int SinhCon() override
    {
        return rand() % 3;
    }

    // Ham tinh luong sua
    // Input: Khong co
    // Output: Tra ve so lit sua con cuu cho (0 - 5)
    // Huong giai quyet: Dung ham rand de tao ngau nhien so lit sua
    double ChoSua() override
    {
        return (double)(rand() % 6);
    }

    // Ham lay loai gia suc
    // Input: Khong co
    // Output: Tra ve 2 (Ung voi cuu)
    int getLoai() override
    {
        return 2;
    }
};

