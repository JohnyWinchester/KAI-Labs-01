/*  5. Дана целочисленная матрица из 4-х строк и 5-ти столбцов.
    Определить:
    в) количество нулевых элементов в каждой строке матрицы;
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

    srand(time(NULL));
    int arr[4][5];

    for(int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = rand() % 10;
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    for (int i = 0; i < 4; i++)
    {
        int zeroCount = 0;
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == 0)
                zeroCount++;
        }
        cout << "Количество нулей в строке " << i << ": " << zeroCount;
        cout << "\n";
    }
}
