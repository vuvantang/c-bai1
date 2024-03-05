#include <iostream>
using namespace std;

const float PI = 3.14159; // Khai báo hằng số PI

int main()
{
    float banKinh;
    float chuVi, dienTich;

    // Nhập bán kính của hình tròn từ người dùng
    cout << "Nhap ban kinh cua hinh tron: ";
    cin >> banKinh;

    // Tính chu vi và diện tích của hình tròn
    chuVi = 2 * PI * banKinh;
    dienTich = PI * banKinh * banKinh;

    // In kết quả ra màn hình
    cout << "Chu vi cua hinh tron la: " << chuVi << endl;
    cout << "Dien tich cua hinh tron la: " << dienTich << endl;

    return 0;
}
