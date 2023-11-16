/*  2. Даны натуральное число n, действительные числа A1,A2,...,An.
    Получить:
    г) min (|A1 |, ..., |An |);
*/

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int minNumber(vector<int> array)
{
    int min = array[0];

    for (int i = 1; i < size(array); i++)
    {
        if (abs(min) > abs(array[i]))
            min = array[i];
    }
    return min;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int n;

    cout << "Введите количество чисел: ";
    cin >> n;

    cout << "Введите числовую последовательность:\n";
    vector<int> array(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> array[i];
    }

    int min =  minNumber(array);
    cout << "Минимальное число: " << min << "\n";
}
