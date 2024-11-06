#include <locale.h>
#include <stdio.h>
void main()
{
	setlocale(LC_ALL, "ru");
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;

	printf("Значения:\n char: %c\n int: %d\n float: %f\n double: %e\nВведите новые значения:\n", c, i, f, d);

	char c1;
	int i1;
	float f1;
	double d1;

	scanf_s("%c", &c1);
	scanf_s("%d", &i1);
	scanf_s("%f", &f1);
	scanf_s("%e", &d1);

	float f2;
	f2 = f1 - (int)f1;

	printf("Целая часть числа - %d\nДробная часть числа - %f\n", (int)f1, f2);
	printf("Шестнадцатиричный код - %02hhx, десятеричный - %i\n", c1, c1);
	printf("Последний пункт - %d", 1 / i1);

	return 0;
}