#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int array[5] = { 1, 2, 3, 4, 5 };
    int *arrayPtr;
    int *elementPtr;
    
    arrayPtr = array;

    elementPtr = &array[3];

    cout << arrayPtr[3] << endl;
    cout << *elementPtr << endl;


    cout << *arrayPtr << endl;
    cout << *(arrayPtr + 1) << endl;
    cout << *(arrayPtr + 2) << endl;
    cout << *(arrayPtr + 3) << endl;
    cout << *(arrayPtr + 4) << endl;

    cout << *(++ arrayPtr) << endl;
    cout << *(++ arrayPtr) << endl;
    cout << *(++ arrayPtr) << endl;
    cout << *(++ arrayPtr) << endl;
    

    return 0;
}
