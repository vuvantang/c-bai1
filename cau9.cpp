#include <iostream>
using namespace std;

int main()
{
    float canNang, chieuCao;
    float bmi;

    // Nhập cân nặng và chiều cao từ người dùng
    cout << "Nhap can nang (kg): ";
    cin >> canNang;

    cout << "Nhap chieu cao (m): ";
    cin >> chieuCao;

    // Tính chỉ số BMI
    bmi = canNang / (chieuCao * chieuCao);

    // In kết quả ra màn hình
    cout << "Chi so BMI cua ban la: " << bmi << endl;

    return 0;
}
