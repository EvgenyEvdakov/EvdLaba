#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL "Russian");
	float a, b, c, Xn, Xk, dx, x, F;
	printf("Введите значение a: \n");
	scanf_s(" %f", &a);
	printf("Введите значение b: \n");
	scanf_s(" %f", &b);
	printf("Введите значение c: \n");
	scanf_s(" %f", &c);
	printf("Задайте начальное значение переменной x: \n");
	scanf_s(" %f", &Xn);
	printf("Задайте конечное значение переменной x: \n");
	scanf_s(" %f", &Xk);
	printf("Задайте шаг с которым будут перебираться значения от начального значения x до коненого значения x: \n");
	scanf_s(" %f", &dx);
	for (x = Xn; x <= Xk; x = x + dx);
	{
		if (x < 0 && c != 0)
		{
			F = (-(a * x * x)) + (b * b * x);
		}
		else
		{
			if (x > 0 && c != x)
			{
				F = x - (a / (x - c));
			}
			else
			{
				F = 1 + (x / c);
			}
		}
		printf("Значение функции F = %f\n", F);
	}


}