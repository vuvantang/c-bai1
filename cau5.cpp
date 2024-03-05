#include <iostream>
#include <ctime> // Để sử dụng hàm time và struct tm
using namespace std;

int main()
{
    int namSinh;
    int tuoi;

    // Nhập năm sinh từ người dùng
    cout << "Nhập năm sinh: ";
    cin >> namSinh;

    // Lấy năm hiện tại
    time_t bayGio = time(0);
    tm *thoiGianHienTai = localtime(&bayGio);
    int namHienTai = 1900 + thoiGianHienTai->tm_year;

    // Tính tuổi
    tuoi = namHienTai - namSinh;

    // In kết quả ra màn hình
    cout << "Bạn sinh năm " << namSinh << " vậy bạn " << tuoi << " tuổi." << endl;

    return 0;
}
