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
	printf("������� ��� � ������� ����� ������������ �������� �� ���������� �������� x �� �������� �������� x: \n");
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
		printf("�������� ������� F = %f\n", F);
	}


}