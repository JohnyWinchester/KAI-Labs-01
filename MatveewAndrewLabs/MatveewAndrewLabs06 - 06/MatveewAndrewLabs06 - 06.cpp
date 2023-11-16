/*  6. Дана целочисленная квадратная матрица размером nxn, где n –
    заданное число (n<7). Определить:
    е) сумму и наименьший элемент побочной диагонали.
*/
#include <iostream>
#include <vector>
#include <windows.h>
#include <cstdlib>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Введите n (n < 7): ";
    int n;
    cin >> n;

    srand(time(NULL));
    int** arr = new int* [n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = rand() % 10;
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    int sum = 0;
    int minNum = arr[0][n-1];

    for (int i = 0; i < n; i++) 
    {
        int tempNum = arr[i][n - i - 1];

        sum += tempNum;
        if (minNum > tempNum)
            minNum = tempNum;
    }

    cout << "\n";
    cout << "Сумма элементов побочной диагонали: " << sum << endl;
    cout << "\n";
    cout << "Минимальный элемент побочной диагонали: " << minNum << endl;
}
