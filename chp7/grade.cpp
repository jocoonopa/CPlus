#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int myArr[2][3] = {
        {
            87, 93, 95
        },

        {
            95, 85, 99
        }
    };

    int sum[2] = { 0, 0 };

    for (int i = 0; i < 2; ++i) {
        cout << " myArr[" << i << "]" <<'\t';

        for (int j = 0; j < 3; ++j) {
            cout << setw(2) << myArr[i][j] << '\t';

            sum[i] += myArr[i][j];
        }

        cout << setw(2) << sum[i] << endl;
    }

    return 0;
}