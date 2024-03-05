#include <iostream>
using namespace std;

int main()
{
    int N;

    // Nhập vào số nguyên dương N có hai chữ số
    do
    {
        cout << "Nhập số nguyên dương N (có hai chữ số): ";
        cin >> N;
    } while (N < 10 || N > 99); // Kiểm tra N có hai chữ số hay không

    // Tính tổng các chữ số của N
    int tong = (N / 10) + (N % 10);

    // In kết quả ra màn hình
    cout << "Tổng các chữ số của " << N << " là: " << tong << endl;

    return 0;
}
