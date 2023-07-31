#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct NS {
    int ngay;
    int thang;
    int nam;
};

class KhachHang {
private:
    string ho_ten;
    NS ngay_sinh;
    string so_cmt;
    string ho_khau;

public:
    void nhapThongTin() {
        cout << "Nhap ho ten: ";
        getline(cin, ho_ten);

        cout << "Nhap ngay sinh (ngay thang nam cach nhau boi dau cach): ";
        cin >> ngay_sinh.ngay >> ngay_sinh.thang >> ngay_sinh.nam;
        cin.ignore(); 
        cout << "Nhap so CMT: ";
        getline(cin, so_cmt);

        cout << "Nhap ho khau: ";
        getline(cin, ho_khau);
    }

    void xuatThongTin() const {
        cout << "\nHo ten: " << ho_ten << endl;
        cout << "Ngay sinh: " << ngay_sinh.ngay << "/" << ngay_sinh.thang << "/" << ngay_sinh.nam << endl;
        cout << "So CMT: " << so_cmt << endl;
        cout << "Ho khau: " << ho_khau << endl;
    }

    string getHoTen() const {
        return ho_ten;
    }

    int getThangSinh() const {
        return ngay_sinh.thang;
    }
};

int main() {
    int n;

    cout << "Nhap so luong khach hang (n): ";
    cin >> n;
    cin.ignore(); // X�a b? �?m �? nh?p chu?i ti?p theo

    vector<KhachHang> danh_sach_khach_hang;

    for (int i = 0; i < n; i++) {
        cout << "\nNhap thong tin cho khach hang thu " << i + 1 << ":" << endl;
        KhachHang kh;
        kh.nhapThongTin();
        danh_sach_khach_hang.push_back(kh);
    }

    for (int i = 0; i < n - 1; i++) {	
        for (int j = i + 1; j < n; j++) {
            if (danh_sach_khach_hang[i].getHoTen() > danh_sach_khach_hang[j].getHoTen()) {
                swap(danh_sach_khach_hang[i], danh_sach_khach_hang[j]);
            }
        }
    }

    cout << "\nDanh sach khach hang theo thu tu tang dan cua ho ten:" << endl;
    for (int i = 0; i < n; i++) {
        danh_sach_khach_hang[i].xuatThongTin();
    }

    cout << "\nDanh sach cac khach hang co sinh nhat thang 12:" << endl;
    for (int i = 0; i < n; i++) {
        if (danh_sach_khach_hang[i].getThangSinh() == 12) {
            danh_sach_khach_hang[i].xuatThongTin();
        }
    }

    return 0;
}

