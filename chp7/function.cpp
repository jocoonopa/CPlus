#include <iostream>

using namespace std;

void showArray(int [], int []);

int main(int argc, char const *argv[])
{
    int s[5] = { 1, 3, 5, 7, 9 };
    int t[5] = { 2, 4, 6, 8, 10 };

    showArray(s, t);

    return 0;
}

void showArray(int s[], int t[])
{
    int arrLength = 5; // 這邊用 sizeof(s) 一樣抓不到正確的陣列長度， c++ 還是返回 pointer 的 size (8bytes)

    for (int i = 0; i < arrLength; ++i) {
        cout << s[i] << endl;
        cout << t[i] << endl;
    }
}