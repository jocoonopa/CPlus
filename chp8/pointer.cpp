#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int number;
    int *numPtr;

    numPtr = &number;

    *numPtr = 100;

    cout << number << endl;

    *numPtr = 200;

    cout << number << endl;

    return 0;
}
