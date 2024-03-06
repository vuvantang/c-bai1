#include <iostream>
#include <cmath>

int main()
{
    double A;

    // Tính giá trị của biểu thức A
    double term1 = pow(32, 0.2);
    double term2 = pow(1.0 / 64, -0.25);
    double term3 = pow(8.0 / 27, 0.5);

    A = term1 - term2 + term3;

    // In ra giá trị của A
    std::cout << "Giá trị của biểu thức A là: " << A << std::endl;

    return 0;
}
