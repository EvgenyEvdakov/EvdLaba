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
}