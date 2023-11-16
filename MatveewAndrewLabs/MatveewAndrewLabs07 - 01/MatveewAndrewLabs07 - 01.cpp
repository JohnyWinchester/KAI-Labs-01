/*  1. Даны две строки длиной до 80 символов. Необходимо:
    б) определить, сколько раз заданный символ встречается в обеих
    строках. Описать в виде отдельной функции определение числа повторений
    заданного символа в заданной строке;
*/
#include <iostream>
#include <vector>
#include <windows.h>
#include <cstdlib>
#include <string>
#include <stdlib.h>
using namespace std;

int SymbolsCounter(string* str, char symbol)
{
    int count = 0;
    string newStr = *str;

    for(int i = 0; i < newStr.length();i++)
    {
        if (newStr[i] == symbol)
            count++;
    }

    return count;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string* str1 = new string("assss");
    string* str2 = new string("absbadbsdaaaa");
    char symbol = 's';

    int countStr1 = SymbolsCounter(str1, symbol);
    int countStr2 = SymbolsCounter(str2, symbol);

    cout << "Количество символов" << symbol << " в первой строке: " << countStr1 << endl;
    cout << "Количество символов" << symbol << " во второй строке: " << countStr2 << endl;
}
