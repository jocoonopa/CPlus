#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char string[] = "ANSI/ISO C++";
    const char* pstring = "Visual C++"; // 像編譯器保證不會透過 pstring 改動記憶體內的值
    const std::string myStr("text");

    cout << string << endl;
    cout << pstring << endl;
    cout << myStr << endl;

    return 0;
}