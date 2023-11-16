/*  4. Дана строка длиной не более 80 символов, оканчивающаяся точкой.
    Определить:
    д) символ, встречающийся в тексте с максимальной частотой.
*/

#include <iostream>
#include <vector>
#include <windows.h>
#include <cstdlib>
#include <string>
#include "SymbolCount.h"
using namespace std;

vector<SymbolCount> SymbolsCounter(string *str,vector<SymbolCount> symbols)
{
    string newStr = *str;
    SymbolCount counter;
    counter.count = 1;
    counter.symbol = newStr[0];

    symbols.push_back(counter);
    for(int i = 1; i < newStr.length(); i++)
    {
        bool flag = false;
        int index = -1;
        for (int j = 0; j < symbols.size(); j++)
        {
            if(newStr[i] == symbols[j].symbol)
            {
                flag = true;
                index = j;
                break;
            }
        }

        if(flag == true)
        {
            symbols[index].count++;
        }
        else
        {
            SymbolCount symbol;
            symbol.count = 1;
            symbol.symbol = newStr[i];
            symbols.push_back(symbol);
        }
    }

    return symbols;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string *str = new string();
    cout << "Введите строку :" << endl;
    getline(cin, *str);

    vector<SymbolCount> symbols{};
    symbols = SymbolsCounter(str, symbols);

    for (int i = 0; i < symbols.size(); i++) 
    {
        cout << symbols[i].symbol << " " << symbols[i].count << endl;
    }

    SymbolCount mostRepeatSymbol;
    mostRepeatSymbol.count = symbols[0].count;
    mostRepeatSymbol.symbol = symbols[0].symbol;

    for(int i = 1; i < symbols.size();i++)
    {
        if (symbols[i].count > mostRepeatSymbol.count)
            mostRepeatSymbol = symbols[i];
    }

    cout << "Самый частый символ: " << mostRepeatSymbol.symbol << " - " << mostRepeatSymbol.count << endl;
}
