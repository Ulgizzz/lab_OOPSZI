#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include "stdio.h"
#include "math.h"

double f(double x);

void main()
{
	double x = 5;
	printf("x = %f\nf = %f\n\n", x, f(x));
	printf("x = "); scanf("%lf", &x);
	printf("f = %f", f(x));
	_getch();
}

double f(double x)
{
	return (cos(x) + sin(x)) / (cos(x) - sin(x));
}
