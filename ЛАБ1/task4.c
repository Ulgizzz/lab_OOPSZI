#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include "stdio.h"
#include "math.h"

void f_result();
double x, f;

void main()
{
	x = 5; f_result();
	printf("x = %f\nf = %f\n\n", x, f);
	printf("x = "); scanf("%lf", &x);
	f_result(); printf("f = %f", f);
	_getch();
}

void f_result()
{
	f = (cos(x) + sin(x)) / (cos(x) - sin(x));
}
