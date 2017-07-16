#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int number = 4;
    int* numberPtr;
    int myArray[3] = { 1, 2, 3};

    numberPtr = &number;

    cout << sizeof(numberPtr) << endl; // 指標有 8 bytes
    cout << sizeof(number) << endl; // 整數有 4 bytes
    cout << sizeof(*numberPtr) << endl; // 整數有 4 bytes

    cout << sizeof(myArray) << endl; // 三個整數，所以是 12 bytes
    cout << (sizeof(myArray) / sizeof(myArray[0])) << endl; // 三個元素

    return 0;
}