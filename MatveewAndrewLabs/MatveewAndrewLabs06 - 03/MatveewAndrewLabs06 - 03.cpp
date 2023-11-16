/*  3. Дана строка длиной не более 80 символов, оканчивающаяся точкой.
    Подчеркнуть все гласные буквы в строке.
*/

#include <iostream>
//#include <stdio.h>
//#include <conio.h>
//#include <string.h>
#include <cstdlib>
#include <string>
#include <windows.h>
using namespace std;

bool MatchVowels(char letter, string smallVowels, string bigVowels)
{
    for(int i = 0; i < smallVowels.size();i++)
    {
        if (smallVowels[i] == letter)
            return true;
    }

    for (int i = 0; i < bigVowels.size(); i++)
    {
        if (bigVowels[i] == letter)
            return true;
    }

    return false;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string str;
    cout << "Введите строку :" << endl;
    getline(cin, str);

    string underlining;
    string smallVowels{ "ауоиэыяюеё" };
    string bigVowels{ "АУОИЭЫЯЮЕЁ" };
    for(int i = 0; i < str.length(); i++) 
    {
        if(MatchVowels(str[i], smallVowels, bigVowels))
        {
            underlining += "-";
            continue;
        }
        underlining += " ";
    }

    cout << underlining;

    //char* psz = new char[256];
    //printf("Enter a string: "); gets_s(psz,sizeof(psz));

    //char pchars[] = "aeiouy";
    //char* str = new char[256];
    //memset((void*)str, 0x00, 256);
    //for (int i = 0; psz[i] != '\0'; i++)
    //    str[i] = strchr(pchars, psz[i]) ? '_' : ' ';

    //printf("%s\n%s\n", psz, str);

    //_getch();
}
