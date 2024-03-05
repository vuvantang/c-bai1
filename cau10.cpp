#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
    string soXe;

    // Nhập số xe từ người dùng
    cout << "Nhập số xe (gồm 5 chữ số): ";
    cin >> soXe;

    // Sử dụng set để lưu trữ các chữ số đã xuất hiện
    set<char> chuSo;

    // Đếm số lượng chữ số khác nhau
    for (char c : soXe)
    {
        chuSo.insert(c);
    }

    // In số lượng nút ra màn hình
    cout << "Số xe " << soXe << " có " << chuSo.size() << " nút." << endl;

    return 0;
}
