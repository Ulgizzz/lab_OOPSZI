#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include <locale.h>

_Bool point(double x, double y);
double f(double x);

int main()
{
	setlocale(LC_ALL, "Rus");
	double x, y;
	printf("������� ����� ��������:\n1 - ������� 1\n2 - ������� 2\n3 - �����\n\n");
	while (1)
	{
		switch (_getch())
		{
		case '1':
			printf("������� 1:\n");
			printf("x = "); scanf("%lf", &x);
			printf("y = "); scanf("%lf", &y);
			if (point(x, y)) 
			{
				printf("�����! :)\n\n");
			}
			else
			{
				printf("�� �����! :(\n\n");
			}
			break;
		case '2':
			printf("������� 2:\n");
			printf("x = "); scanf("%lf", &x);
			printf("f = %f\n\n", f(x));
			break;
		case '3':
			return 0;
			break;
		default:
			printf("�������� ����\n");
			break;
		}
	}
}
