#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip> 
#include <sstream> 

using namespace std;

struct NhanVien {
    int maNV; 
    string hoTen;
    string gioiTinh;
    string ngaySinh;
    string diaChi;
    string maSoThue;
    string ngayKyHD;

    NhanVien(int id) : maNV(id) {} 
};


bool soSanh(NhanVien &nv1, NhanVien &nv2) {
  
    int day1, month1, year1;
    int day2, month2, year2;
    sscanf(nv1.ngaySinh.c_str(), "%d/%d/%d", &day1, &month1, &year1);
    sscanf(nv2.ngaySinh.c_str(), "%d/%d/%d", &day2, &month2, &year2);

    if (year1 != year2) {
        return year1 < year2;
    } else if (month1 != month2) {
        return month1 < month2;
    } else {
        return day1 < day2;
    }
}

int main() {
    int N;
    cin >> N;
    cin.ignore(); 

    vector<NhanVien> danhSachNV;

    for (int i = 0; i < N; ++i) {
        string hoTen, gioiTinh, ngaySinh, diaChi, maSoThue, ngayKyHD;

        getline(cin, hoTen);
        cin >> gioiTinh;
        cin >> ngaySinh;
        cin.ignore(); 
        getline(cin, diaChi);
        cin >> maSoThue >> ngayKyHD;
        cin.ignore(); 

        NhanVien nv(i + 1); 
        nv.hoTen = hoTen;
        nv.gioiTinh = gioiTinh;
        nv.ngaySinh = ngaySinh;
        nv.diaChi = diaChi;
        nv.maSoThue = maSoThue;
        nv.ngayKyHD = ngayKyHD;

        danhSachNV.push_back(nv);
    }


    sort(danhSachNV.begin(), danhSachNV.end(), soSanh);

    for (const auto &nv : danhSachNV) {
         cout << setw(5) << setfill('0') << nv.maNV << " "
             << nv.hoTen << " "
             << nv.gioiTinh << " "
             << nv.ngaySinh << " "
             << nv.diaChi << " "
             << nv.maSoThue << " "
             << nv.ngayKyHD << endl;
    }
    return 0;

}



