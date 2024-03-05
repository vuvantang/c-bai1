#include <iostream>
#include <random> // Thư viện random
using namespace std;

int main()
{
    // Khởi tạo một generator ngẫu nhiên
    random_device rd;
    mt19937 gen(rd());

    // Tạo phạm vi ngẫu nhiên và phép phân phối mong muốn
    uniform_int_distribution<int> dist0to100(0, 100);
    uniform_int_distribution<int> dist50to99(50, 99);
    uniform_int_distribution<int> distMinus39to79(-39, 79);
    uniform_int_distribution<int> distMinus79toMinus39(-79, -39);

    // Xuất số ngẫu nhiên theo từng phạm vi yêu cầu
    cout << "Số ngẫu nhiên trong phạm vi 0 đến 100: " << dist0to100(gen) << endl;
    cout << "Số ngẫu nhiên trong phạm vi 50 đến 99: " << dist50to99(gen) << endl;
    cout << "Số ngẫu nhiên trong phạm vi -39 đến 79: " << distMinus39to79(gen) << endl;
    cout << "Số ngẫu nhiên trong phạm vi -79 đến -39: " << distMinus79toMinus39(gen) << endl;

    return 0;
}
