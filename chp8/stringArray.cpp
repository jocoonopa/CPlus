#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // 這段會爆炸，目前 mac 用的 compiler 不能這樣寫，第二個 [] 一定要宣告長度 
    // 
    // char array[4][] = {
    //     "床前明月光",
    //     "疑是地上霜",
    //     "舉頭望明月",
    //     "低頭思故鄉"
    // };

    // const  一定要加，不然會發生 conversion from string literal to 'char *' is
    // deprecated [-Wc++11-compat-deprecated-writable-strings],
    // 加了表示編譯器保證不會透過 pstringArray 改動記憶體內的值
    // 加了 const 是無法修改此陣列的，包含其元素也無法修改
    const char *pstringArray[] = { 
        "abcde",
        "fghij",
        "klmno",
        "pqrst"
    };

    //cout << array[2] << endl;
    
    cout << pstringArray[2] << endl; // 輸出klmno
    cout << *pstringArray[0] << endl; // 輸出 abcde 的 a, 相當於 pstringArray[0][0]
    cout << *(pstringArray[0] + 2) << endl; // 輸出 abcde 的 c, 相當於 pstringArray[0][2]
    cout << pstringArray[0][2] << endl;  // 輸出 abcde 的 c
    cout << *(pstringArray + 3) << endl; // 輸出 pqrst

    return 0;
}
