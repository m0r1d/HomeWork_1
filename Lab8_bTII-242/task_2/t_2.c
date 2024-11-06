#include <locale.h>
#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

void main()
{
	setlocale(LC_ALL, "ru");
	float x1, x2, sh;
	printf("y = x^3 - 4 * x^2 + 2\n");
	printf("Начало интервала: ");
	scanf_s("%f", &x1);
	printf("Конец интервала: ");
	scanf_s("%f", &x2);
	printf("Шаг: ");
	scanf_s("%f", &sh);
	printf("__________________________\n");
	printf("|     x     |    f(x)    |\n");
	printf("__________________________\n");

	for (float i = x1; i <= x2; i += sh)
	{
		float y, x = i;
		y = pow(x, 3.0) - 4.0 * pow(x, 2.0) + 2.0;
		printf("|  %4.3f    | %4f  |\n", x, y);
		printf("__________________________\n");
	}

	return 0;
}