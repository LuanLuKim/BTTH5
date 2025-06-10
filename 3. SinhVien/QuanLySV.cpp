#include "QuanLySV.h"

QuanLySV::QuanLySV() 
{
    soLuongSV = 0;
}

QuanLySV::~QuanLySV() {
    for (SinhVien* sv : dsSV) 
        delete sv;
}

// Input: Nhap danh sach sinh vien tu ban phim
// Output: Khong co
// Huong giai quyet: Duyet tung phan tu va goi ham Nhap() tuong ung
void QuanLySV::NhapDS() 
{

    cout << "Nhap so luong sinh vien: ";
    cin >> soLuongSV;
    dsSV.clear(); dsSV.resize(soLuongSV);
    for (int i = 0; i < soLuongSV; ++i) 
    {
        int loai;
        SinhVien* sv = NULL;
        do {

            cout << "\nNhap loai sinh vien (1: Cao Dang, 2: Dai Hoc): ";
            cin >> loai;

            if (loai == 1)
                sv = new CaoDang();
            else if (loai == 2)
                sv = new DaiHoc();
            else 
                cout << "Loai khong hop le. Vui long nhap lai.\n";
        } while (loai != 1 && loai != 2);

        sv->Nhap();
        dsSV.push_back(sv);
    }
}

// Input: Khong co
// Output: Xuat thong tin tat ca sinh vien
// Huong giai quyet: Duyet tung phan tu va goi ham Xuat(). Neu rong thi xuat thong bao "Danh sach rong"
void QuanLySV::XuatDS() 
{
    cout << "\n--- Danh sach sinh vien ---\n";
    if (soLuongSV == 0)
    {
        cout << "Danh sach rong." << endl;
        return;
    }
    for (SinhVien* sv : dsSV)
        sv->Xuat();
}

// Input: Khong co
// Output: Xuat sinh vien du dieu kien tot nghiep
// Huong giai quyet: Duyet tung phan tu, kiem tra sinh vien du dieu kien
//                                      va goi ham Xuat()
//                   Neu khong co thi thong bao "Khong co sinh vien du dieu kien tot nghiep"
void QuanLySV::XuatSVDuDK() 
{
    bool found = false;
    cout << "\n--- Sinh vien DU dieu kien tot nghiep ---\n";
    for (SinhVien* sv : dsSV) 
    {
        if (sv->isTotNghiep())
        {
            sv->Xuat();
            found = true;
        }
    }

    if (!found)
        cout << "Khong co sinh vien du dieu kien tot nghiep" << endl;
}

// Input: Khong co
// Output: Xuat sinh vien khong du dieu kien tot nghiep
// Huong giai quyet: Duyet tung phan tu, kiem tra dieu kien sinh vien khong du
//                                      va goi ham Xuat()
//                   Neu khong co thi thong bao "Tat ca sinh vien du dieu kien tot nghiep"
void QuanLySV::XuatSVKoDuDK() 
{
    bool found = false;

    cout << "\n--- Sinh vien KHONG DU dieu kien tot nghiep ---\n";
    for (SinhVien* sv : dsSV) 
    {
        if (!sv->isTotNghiep())
        {
            sv->Xuat();
            found = true;
        }
    }

    if (!found)
        cout << "Tat ca sinh vien du dieu kien tot nghiep" << endl;
}

// Input: Khong co
// Output: Xuat sinh vien dai hoc co diem trung binh cao nhat
// Huong giai quyet: Duyet tung phan tu, tim sinh vien dai hoc co diem trung binh cao nhat
//                                          va xuat thong tin ung voi sinh vien do
//                   Neu khong co sinh vien dai hoc thi thong bao "Danh sach khong ton tai sinh vien dai hoc"
void QuanLySV::XuatSVDHDTBMax() 
{
    double maxDTB = -1;
    SinhVien* maxSV = NULL;
    for (SinhVien* sv : dsSV) 
    {
        if (sv->getLoaiSV() && sv->getDiemTB() > maxDTB) 
        {
            maxDTB = sv->getDiemTB();
            maxSV = sv;
        }
    }
    if (maxSV) 
    {
        cout << "\n--- Sinh vien DAI HOC co DTB cao nhat ---\n";
        maxSV->Xuat();
    }
    else
        cout << "Danh sach khong ton tai sinh vien dai hoc\n";
}

// Input: Khong co
// Output: Xuat sinh vien cao dang co diem trung binh cao nhat
// Huong giai quyet: Duyet tung phan tu, tim sinh vien cao dang co diem trung binh cao nhat
//                                          va xuat thong tin cua sinh vien do
//                   Neu khong co sinh vien cao dang thi thong bao "Danh sach khong ton tai sinh vien cao dang"
void QuanLySV::XuatSVCDDTBMax()
{
    double maxDTB = -1;
    SinhVien* maxSV = NULL;
    for (SinhVien* sv : dsSV) 
    {
        if (!sv->getLoaiSV() && sv->getDiemTB() > maxDTB) 
        {
            maxDTB = sv->getDiemTB();
            maxSV = sv;
        }
    }
    if (maxSV) 
    {
        cout << "\n--- Sinh vien CAO DANG co DTB cao nhat ---\n";
        maxSV->Xuat();
    }
    else
        cout << "Danh sach khong ton tai sinh vien cao dang\n";
}

// Input: Khong co
// Output: Xuat so luong sinh vien khong du DK tot nghiep theo tung loai
// Huong giai quyet: Duyet tung phan tu, kiem tra la sinh vien loai nao va tang bien dem
void QuanLySV::XuatSLKoDuDKMoiLoai()
{
    int cd = 0, dh = 0;
    for (SinhVien* sv : dsSV) 
    {
        if (!sv->isTotNghiep()) 
        {
            if (sv->getLoaiSV())
                dh++;
            else
                cd++;
        }
    }
    cout << "\nSo sinh vien CAO DANG khong du dieu kien tot nghiep: " << cd;
    cout << "\nSo sinh vien DAI HOC khong du dieu kien tot nghiep: " << dh << endl;
}