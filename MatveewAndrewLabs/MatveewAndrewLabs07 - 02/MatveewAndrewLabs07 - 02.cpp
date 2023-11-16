/*  2. Дан числовой массив X[12]. Определить:
    в) min (X[0], X[1], … , X[4]) + min (X[5], X[6], … , X[11]).
    Описать в виде отдельной функции определение минимального
    элемента в заданной части массива.
*/

#include <iostream>
#include <vector>
#include <windows.h>
#include <cstdlib>
#include <string>
#include <stdlib.h>
using namespace std;

int Min(vector<int> arr, int leftIndex, int rightIndex)
{
    int min = arr[leftIndex];
    for(int i = leftIndex; i <= rightIndex; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }

    return min;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    vector<int> arr = { 1 ,2 ,3, -5, 2, -10, 22, -999, 33, -1, 0, 5 };

    int firstMin = Min(arr, 0, 4);
    int secondMin = Min(arr, 5, 11);

    cout << "Минимальный элемент в диапазоне: X[0] - X[4]: "<< firstMin  << endl;
    cout << "Минимальный элемент в диапазоне: X[5] - X[11]: " << secondMin << endl;
    cout << "Их сумма: " << firstMin + secondMin << endl;
}
