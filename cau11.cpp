#include <iostream>
#include <cctype> // Để sử dụng hàm toupper
using namespace std;

int main()
{
    char kyTuChuThuong, kyTuChuHoa;

    // Nhập ký tự chữ thường từ người dùng
    cout << "Nhập một ký tự chữ thường: ";
    cin >> kyTuChuThuong;

    // Chuyển đổi ký tự chữ thường thành chữ hoa
    kyTuChuHoa = toupper(kyTuChuThuong);

    // In kết quả ra màn hình
    cout << "Ký tự chữ hoa tương ứng là: " << kyTuChuHoa << endl;

    return 0;
}
