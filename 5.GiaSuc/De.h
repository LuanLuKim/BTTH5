#pragma once
#include "GiaSuc.h"
class De : public GiaSuc
{
public:

    // Ham phat am thanh cua de
    // Input: Khong co
    // Output: In ra tieng con de keu
    // Huong giai quyet: Dung cout xuat ra "De: Be be be!"
    void Keu() override
    {
        cout << "De: Be be be!" << endl;
    }

    // Ham tinh so luong con duoc sinh cua loai de
    // Input: Khong co
    // Output: Tra ve so luong con de duoc sinh ra (0 - 2)
    // Huong giai quyet: Dung ham rand de tao ngau nhien so con
    int SinhCon() override 
    {
        return rand() % 3;
    }

    // Ham tinh luong sua
    // Input: Khong co
    // Output: Tra ve so lit sua con de cho (0 - 10)
    // Huong giai quyet: Dung ham rand de tao ngau nhien so lit sua
    double ChoSua() override 
    {
        return (double)(rand() % 11);
    }

    // Ham lay loai gia suc
    // Input: Khong co
    // Output: Tra ve 3 (Ung voi de)
    int getLoai() override 
    {
        return 3;
    }
};

