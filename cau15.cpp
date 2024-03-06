#include <iostream>
#include <cmath>

int main()
{
    double a, b;
    std::cout << "Nhập giá trị cho a: ";
    std::cin >> a;
    std::cout << "Nhập giá trị cho b: ";
    std::cin >> b;

    double numerator = (a + b) / (sqrt(a) + sqrt(b)) - sqrt(a * b);
    double denominator = pow(sqrt(a) - sqrt(b), 2);

    // Tính giá trị của biểu thức
    double result = numerator / denominator;

    std::cout << "Giá trị của biểu thức là: " << result << std::endl;

    return 0;
}
