#pragma once
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class GiaSuc
{
public:
    ~GiaSuc() {}

    // Ham phat am thanh
    // Input: Khong co
    // Output: In ra tieng keu cua gia suc
    // Huong giai quyet: Phuong thuc thuan ao, cac lop con override
    virtual void Keu() = 0;

    // Ham tinh so luong con duoc sinh
    // Input: Khong co
    // Output: Tra ve so luong con sinh ra
    // Huong giai quyet: Ngau nhien sinh so con cho tung loai
    virtual int SinhCon() = 0;

    // Ham tinh luong sua
    // Input: Khong co
    // Output: Tra ve so lit sua cho
    // Huong giai quyet: Ngau nhien trong khoang cho phep tung loai
    virtual double ChoSua() = 0;

    // Ham lay loai gia suc
    // Input: Khong co
    // Output: Tra ve loai gia suc tuong ung (1 = Bo, 2 = Cuu, 3 = De)
    // Huong giai quyet: Moi lop con override tra ve loai gia suc tuong ung
    virtual int getLoai() = 0;
};

