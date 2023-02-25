#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL "Russian");
	float a, b, c, Xn, Xk, dx, x, F;
	printf("¬ведите значение a: \n");
	scanf_s(" %f", &a);
	printf("¬ведите значение b: \n");
	scanf_s(" %f", &b);
	printf("¬ведите значение c: \n");
	scanf_s(" %f", &c);
	printf("«адайте начальное значение переменной x: \n");
	scanf_s(" %f", &Xn);
	printf("«адайте конечное значение переменной x: \n");
	scanf_s(" %f", &Xk);
	printf("«адайте шаг с которым будут перебиратьс€ значени€ от начального значени€ x до коненого значени€ x: \n");
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
	}


}