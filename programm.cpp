#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL "Russian");
	float a, b, c, Xn, Xk, dx, x, F;
	printf("������� �������� a: \n");
	scanf_s(" %f", &a);
	printf("������� �������� b: \n");
	scanf_s(" %f", &b);
	printf("������� �������� c: \n");
	scanf_s(" %f", &c);
	printf("������� ��������� �������� ���������� x: \n");
	scanf_s(" %f", &Xn);
	printf("������� �������� �������� ���������� x: \n");
	scanf_s(" %f", &Xk);
}