#include <iostream>
#include <iomanip> // Để sử dụng setw và setprecision
using namespace std;

int main()
{
    int a, b;

    // Nhập vào 2 số nguyên từ người dùng
    cout << "Nhập số nguyên a: ";
    cin >> a;

    cout << "Nhập số nguyên b: ";
    cin >> b;

    // Tính tổng, hiệu, tích, thương, chia lấy dư, chia lấy nguyên
    int tong = a + b;
    int hieu = a - b;
    int tich = a * b;
    float thuong = (float)a / b; // Ép kiểu một trong hai số thành float để thực hiện phép chia float
    int chia_lay_du = a % b;
    int chia_lay_nguyen = a / b;

    // In kết quả ra màn hình với định dạng
    cout << "Tong: " << tong << endl;
    cout << "Hieu: " << hieu << endl;
    cout << "Tich: " << tich << endl;
    cout << "Thuong: " << fixed << setprecision(3) << thuong << endl; // Làm tròn 3 chữ số sau dấu chấm
    cout << "Chia lay du: " << chia_lay_du << endl;
    cout << "Chia lay nguyen: " << chia_lay_nguyen << endl;

    return 0;
}
