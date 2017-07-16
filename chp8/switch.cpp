#include <iostream>
#include <iomanip>

using namespace std;

void swap(int *, int *);

int main(int argc, char const *argv[])
{
    int num1 = 10;
    int num2 = 20;
    int *pnum1 = &num1;
    int *pnum2 = &num2;

    cout << num1 << setw(4) << num2 << endl;

    swap(pnum1, pnum2);

    cout << num1 << setw(4) << num2 << endl;

    return 0;
}

void swap(int *pnum1, int *pnum2) {
    int tmp = *pnum1;

    *pnum1 = *pnum2;
    *pnum2 = tmp;
}