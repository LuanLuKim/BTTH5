#include "NhanVien.h"
// Ham kiem tra ngay thang nam hop le
// Input: Ngay thang nam can kiem tra
// Output: True neu hop le, false neu khong hop le
// Huong giai quyet: Kiem tra lan luot ngay thang nam co nam trong khoang cho phep
bool kiemTraHopLe(dateTime d)
{
	if (d.nam < 0 || d.thang <= 0 || d.thang > 12 || d.ngay <= 0) return false;
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if ((d.nam % 4 == 0 && d.nam % 100 != 0) || d.nam % 400 == 0) days[1] = 29;
	return d.ngay <= days[d.thang - 1];
}
// Ham nhap
// Input: Ho ten va ngay sinh tu ban phim
// Output: Khong co
void NhanVien::Nhap()
{
	cout << "Nhap ho ten: "; 
	cin.ignore(); getline(cin, hoTen);
	do {
		cout << "Nhap ngay sinh (dd mm yyyy): ";
		cin >> ngaySinh.ngay >> ngaySinh.thang >> ngaySinh.nam;
		if (!kiemTraHopLe(ngaySinh)) cout << "Ngay sinh khong hop le. Vui long nhap lai." << endl;
	} while (!kiemTraHopLe(ngaySinh));
}
// Ham xuat
// Input: Khong co
// Output: Ho ten, ngay sinh, nghe nghiep va tien luong ra man hinh
void NhanVien::Xuat()
{
	cout << "Ho ten: " << hoTen;
	cout << "Ngay sinh: " << setw(2) << setfill('0') << ngaySinh.ngay;
	cout << '/' << setw(2) << setfill('0') << ngaySinh.thang;
	cout << '/' << ngaySinh.nam;
	if (loaiNV) cout << "Nghe nghiep: Nhan vien san xuat." << endl;
	else cout << "Nghe nghiep: Nhan vien van phong." << endl;
	cout << "Luong: " << luong;
}