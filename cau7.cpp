#include <iostream>
using namespace std;

int main()
{
    int luaChon;

    cout << "============ MENU ============" << endl;
    cout << "1. Hu tieu" << endl;
    cout << "2. Chao long" << endl;
    cout << "3. Banh canh" << endl;
    cout << "4. Bun rieu" << endl;
    cout << "5. Pho bo" << endl;
    cout << "============================" << endl;
    cout << "Moi nhap lua chon" << endl;
    cout << "============================" << endl;
    cin >> luaChon;

    // Xử lý lựa chọn của người dùng
    switch (luaChon)
    {
    case 1:
        cout << "Ban da chon Hu tieu." << endl;
        break;
    case 2:
        cout << "Ban da chon Chao long." << endl;
        break;
    case 3:
        cout << "Ban da chon Banh canh." << endl;
        break;
    case 4:
        cout << "Ban da chon Bun rieu." << endl;
        break;
    case 5:
        cout << "Ban da chon Pho bo." << endl;
        break;
    default:
        cout << "Lua chon khong hop le." << endl;
        break;
    }

    return 0;
}
