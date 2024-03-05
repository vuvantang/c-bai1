#include <iostream>
using namespace std;

int main()
{
    int gio, phut, giay;
    int tongGiay;

    // Nhập giờ, phút và giây từ người dùng
    cout << "Nhập giờ: ";
    cin >> gio;

    cout << "Nhập phút: ";
    cin >> phut;

    cout << "Nhập giây: ";
    cin >> giay;

    // Chuyển đổi thành số giây tương ứng
    tongGiay = gio * 3600 + phut * 60 + giay;

    // In kết quả ra màn hình
    cout << "Tổng số giây là: " << tongGiay << endl;

    return 0;
}
