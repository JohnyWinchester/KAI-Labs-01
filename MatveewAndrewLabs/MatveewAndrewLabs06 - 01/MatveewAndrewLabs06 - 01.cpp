/*  1. Дана строка символов. Признак конца строки – символ '\n'
    (перевод строки). Строка состоит из слов, pазделенных пpобелами. Вывести:
    е) самое длинное слово и его поpядковый номеp в исходной стpоке.
*/

#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    string str = "Andrey numberzzzzzz strokaawdawdawdawdawd symbols numbwwwwwwwwwwwwwwwwwwwwwwwwwwwwww \n dawdada";
    
    int endStr = str.find("\n"); // конец подстроки до символа \n

    string newStr = str.substr(0, endStr - 1); // обрезаем строку до \n
    
    istringstream strStream(newStr);
    vector<string> result;
    while (!strStream.eof()) { // Делим подстроку по пробелам
        string substring;
        strStream >> substring;
        result.push_back(substring);
    }

    string maxStr = "";
    int index = 0;
    for (int i = 0; i < result.size(); i++) 
    {
        if (result[i].length() > maxStr.length())
        {
            maxStr = result[i];
            index = i + 1;
        }
    }

    cout << "Самое большое слово: " << maxStr << "\nЕго поpядковый номеp в исходной стpоке: " << index;
}
