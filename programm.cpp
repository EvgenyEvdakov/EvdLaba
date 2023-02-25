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

}