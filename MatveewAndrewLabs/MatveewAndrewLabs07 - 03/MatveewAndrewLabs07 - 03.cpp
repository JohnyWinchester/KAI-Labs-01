/*  3. Даны два массива из n целых чисел (n ≤ 10). Для каждого массива:
    б) определить сумму элементов с четными индексами. Описать в виде
    отдельной функции определение для заданного массива суммы элементов
    с четными индексами;
*/
#include <iostream>
#include <vector>
#include <windows.h>
#include <cstdlib>
#include <string>
#include <stdlib.h>
using namespace std;

int Summ(vector<int> arr)
{
    int summ = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        if (i % 2 == 0 && i > 1)
            summ += arr[i];
    }

    return summ;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Введите n (n <= 10): ";
    int n;
    cin >> n;

    srand(time(NULL));
    vector<int> firstArr = {};
    vector<int> secondArr = {};

    for (int i = 0; i < n; i++)
    {
        firstArr.push_back(rand() % 100);
        cout << firstArr[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < n; i++)
    {
        secondArr.push_back(rand() % 100);
        cout << secondArr[i] << " ";
    }
    cout << "\n";

    int firstArrSumm = Summ(firstArr);
    int secondArrSumm = Summ(secondArr);

    cout << "Сумма чётных элементов первого массива: " << firstArrSumm << endl;
    cout << "Сумма чётных элементов втрого массива: " << secondArrSumm << endl;
}
