#include <iostream>
#include <iomanip> // Để sử dụng setw()
using namespace std;

int main()
{
    int ngay, thang, nam;

    // Nhập ngày, tháng và năm sinh từ người dùng
    cout << "Nhập ngày sinh: ";
    cin >> ngay;

    cout << "Nhập tháng sinh: ";
    cin >> thang;

    cout << "Nhập năm sinh: ";
    cin >> nam;

    // Xuất ra theo định dạng dd/mm/yyyy
    cout << "Ngày/tháng/năm (dd/mm/yyyy): " << ngay << "/" << thang << "/" << nam << endl;

    // Xuất ra theo định dạng dd/mm/yy
    cout << "Ngày/tháng/năm (dd/mm/yy): " << ngay << "/" << thang << "/" << setw(2) << setfill('0') << (nam % 100) << endl;

    return 0;
}
