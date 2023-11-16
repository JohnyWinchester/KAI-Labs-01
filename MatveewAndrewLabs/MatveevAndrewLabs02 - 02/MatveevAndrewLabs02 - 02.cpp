/*2. Дано натуральное число n. Проверить справедливость равенства:
Пункт г
*/

#include <iostream>

int main()
{
	int x;
	int leftPart = 0,
		rightPart = 0;
	printf("x = ");
	scanf_s("%d", &x);

	//Левая часть уравнения
	for (int i = 1; i <= x; i++) 
	{
		leftPart += pow(i, 3);
	}

	//Правая часть уравнения
	for (int i = 1; i <= x; i++) 
	{
		rightPart += i;
	}
	rightPart = pow(rightPart, 2);

	if (leftPart == rightPart)
		printf("%d = %d", leftPart, rightPart);
	else
		printf("%d != %d", leftPart, rightPart);

}
