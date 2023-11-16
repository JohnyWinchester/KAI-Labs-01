/*3. Дано натуральное число n. Определить:
 а) количество цифр в числе n;
 б) сумму его цифр;
 в) первую цифру числа n.
*/

#include <iostream>
#include <string> 
#include <sstream>
using namespace std;

//Конвертация в строку
template <typename T>
string toString(T val)
{
    ostringstream oss;
    oss << val;
    return oss.str();
}

int main()
{
    int a, n = 0, sum = 0;
    cin >> a;

    string strNumber = toString(a);
    char firstNum = strNumber[0];

    do
    {
        sum += a % 10; 
        n++;
        
    } while (a /= 10);

    cout << "n = " << n << " " << "sum = " << sum << " " << "lastNum = " << firstNum <<  endl;
    system("pause");
}