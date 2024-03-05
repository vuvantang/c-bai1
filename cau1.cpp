#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;

    // Nhập vào 4 số nguyên từ người dùng
    printf("Nhập số nguyên a: ");
    scanf("%d", &a);

    printf("Nhập số nguyên b: ");
    scanf("%d", &b);

    printf("Nhập số nguyên c: ");
    scanf("%d", &c);

    printf("Nhập số nguyên d: ");
    scanf("%d", &d);

    // Tính trung bình cộng
    double trung_binh = (a + b + c + d) / 4.0;

    // In kết quả ra màn hình
    printf("Trung bình cộng của %d, %d, %d và %d là: %.2f\n", a, b, c, d, trung_binh);

    return 0;
}
