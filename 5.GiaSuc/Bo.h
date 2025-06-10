#pragma once
#include "GiaSuc.h"
class Bo : public GiaSuc
{
public:
    Bo() {}

    // Ham phat am thanh cua bo
    // Input: Khong co
    // Output: In ra tieng con bo keu
    // Huong giai quyet: Dung cout xuat ra "Bo: Um bo um bo!"
    void Keu() override
    {
        cout << "Bo: Um bo um bo!" << endl;
    }

    // Ham tinh so luong con duoc sinh cua loai bo
    // Input: Khong co
    // Output: Tra ve so luong con bo duoc sinh ra (0 - 2)
    // Huong giai quyet: Dung ham rand de tao ngau nhien so con
    int SinhCon() override 
    {
        return rand() % 3;
    }

    // Ham tinh luong sua
    // Input: Khong co
    // Output: Tra ve so lit sua con bo cho (0 - 20)
    // Huong giai quyet: Dung ham rand de tao ngau nhien so lit sua
    double ChoSua() override 
    {
        return (rand() % 210)/10.0;
    }

    // Ham lay loai gia suc
    // Input: Khong co
    // Output: Tra ve 1 (Ung voi bo)
    int getLoai() override 
    {
        return 1;
    }
};

