#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include "stdio.h"
#include "math.h

void main()
{
	double x = 5, f = (cos(x) + sin(x)) / (cos(x) - sin(x));
	printf("x = %f\nf = %f\n\n", x, f);
	printf("x = "); scanf("%lf", &x);
		f = (cos(x) + sin(x)) / (cos(x) - sin(x));
printf("f = %f", f);
	_getch();
}
