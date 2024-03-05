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

    // Phân loại BMI
    if (bmi < 18.5)
    {
        cout << "Ban dang bi thieu can." << endl;
    }
    else if (bmi >= 18.5 && bmi < 25)
    {
        cout << "Ban co can nang ly tuong." << endl;
    }
    else if (bmi >= 25 && bmi < 30)
    {
        cout << "Ban dang bi thua can." << endl;
    }
    else
    {
        cout << "Ban bi beo phi." << endl;
    }

    return 0;
}
