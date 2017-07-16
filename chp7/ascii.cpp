#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    char ascii[10] = {
        '0', '1', '2',
        '3', '4', '5',
        '6', '7', '8',
        '9'
    };

    cout << "字元 ascii 碼";
    cout << "\n";
    cout << "-------\t------\n";

    for (int i = 0; i < 9; ++i) {
        cout << setw(3) << ascii[i] << '\t';
        cout << setw(5) << int(ascii[i]);
        cout << endl;
    }

    return 0;
}
