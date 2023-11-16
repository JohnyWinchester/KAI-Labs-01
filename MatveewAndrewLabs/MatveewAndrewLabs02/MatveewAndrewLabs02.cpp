﻿/*1. Дано действительное число x. Вычислить значение y с помощью
стандартной функции и с помощью ряда с точностью 0, 0001:
Пункт к
*/

#include <stdio.h>
#include <math.h>
#define E 1e-04 // точность вычисления

int main()
{
	float x, // аргумент функции
		  y; // сумма ряда
	float a; // очередной член ряда
	int n; // номер итерации n

	printf("x=");
	scanf_s("%f", &x);

	y = 0; 
	a = (x - 1)/x; 
	n = 0;
	while (fabs(a) >= E)
	{
		y = y + a;
		n++; 
		a = pow((x - 1),n) /(pow(x,n) * n); /* вычисление очередного члена
	   ряда через предыдущий */
	}

	printf("y=%f\n", y);
	printf("lnx=%f\n", log10(x));
	return 0;
}