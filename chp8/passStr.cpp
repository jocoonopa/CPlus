#include <iostream>

using namespace std;

void toUpper(char *);

int main(int argc, char const *argv[])
{
     char myStr[] = "I am garbage, are you happy fucking world?";
     char *charPtr = &myStr[0];

    cout << "更改前: " << myStr << endl;

    toUpper(charPtr);

    cout << "更改後: " << myStr << endl;

    return 0;
}

void toUpper(char *str)
{
    cout << "傳入字串首字元: "<< *str << endl;

    while(NULL != str && '\0' != *str) {
        if (*str != ' ' && ' ' == *(str - 1)) {
            *str -= 32;
        }

        str ++;
        cout << "ASCII: " << int(*(str)) << endl;
    }
}