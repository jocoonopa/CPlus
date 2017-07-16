#include <iostream>

using namespace std;

void showArray(int *, int arrLength);
void sort(int *, int arrLength);
void swap(int *, int *);

int main(int argc, char const *argv[])
{
    int tArr[5] = { 9, 199, 20, 331, 510 };
    int arrLength = sizeof(tArr) / sizeof(tArr[0]);

    sort(tArr, arrLength);

    showArray(tArr, arrLength);

    return 0;
}

void sort(int *arr, int arrLength)
{
    int tmp = 0;

    for (int i = 0; i < arrLength; i ++) {
        for (int j = (i + 1); j < arrLength; j ++) {
            if (arr[i] < arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

void showArray(int *showArr, int arrLength)
{
    for (int i = 0; i < arrLength; ++i) {
        cout << showArr[i] << endl;
    }
}

void swap(int *num1, int *num2)
{
    int tmp = *num1;

    *num1 = *num2;
    *num2 = tmp;
}
