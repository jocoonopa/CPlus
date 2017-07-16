#include <iostream>

using namespace std;

void showArray(int *);

int main(int argc, char const *argv[])
{
    int source[3] = { 1, 3, 5 };
    
    showArray(source);

    return 0;
}

void showArray(int *showArr)
{
    int arrayLength = 3; // 沒辦法用 sizeof 去抓 showArr 的大小，宣告指標後 sizeof 就是單純回傳指標的大小而已 (8bytes)

    cout << "分子: " << sizeof(showArr) << endl;
    cout << "分母: " << sizeof(showArr[0]) << endl;
    cout << "長度: " << arrayLength << endl;

    for (int i = 0; i <= arrayLength; ++i) {
        cout << showArr[i] << endl;
    }
}