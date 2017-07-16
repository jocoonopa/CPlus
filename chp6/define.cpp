#include <iostream>

using namespace std;

#define MAX(x, y) ((x > y) ? x : y)

int main(int argc, char const *argv[])
{
    int num1;
    int num2;
    
    cout << "請輸入兩個整數";
    cin >> num1 >> num2;
    cout << num1 << " 和 " << num2;
    cout << " 的較大值是 " << MAX(num1, num2);
    // MAX(num1, num2) 相當於 ((num1 > num2) ? num1 : num2)
    cout << endl;

    return 0;
}