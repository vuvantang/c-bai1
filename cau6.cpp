#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    // Nhập a, b và c từ người dùng
    cout << "Nhập a: ";
    cin >> a;

    cout << "Nhập b: ";
    cin >> b;

    cout << "Nhập c: ";
    cin >> c;

    // In phương trình ra màn hình
    cout << a << "X^2 + " << b << "X + " << c << " = 0" << endl;

    return 0;
}
