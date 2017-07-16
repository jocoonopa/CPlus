#include <iostream>

using namespace std;

void powerByPointer(const int *); 
void powerByRef(const int &);

int main(int argc, char const *argv[])
{
    int someLength = 10;
    int *someLengthPtr = &someLength;

    powerByPointer(someLengthPtr);
    powerByRef(*someLengthPtr);
    powerByRef(someLength);

    return 0;
}

void powerByPointer(const int *numPtr) 
{
    cout << (*numPtr * *numPtr) << endl;
}

void powerByRef(const int &numPtr)
{
    cout << numPtr * numPtr << endl;
}