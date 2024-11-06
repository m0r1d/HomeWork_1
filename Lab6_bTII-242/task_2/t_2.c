#include <locale.h>
#include <stdio.h>
void main()
{
	setlocale(LC_ALL, "ru");
	float x;

	puts("Добрый день! Введите, пожалуйста, х.");
	scanf_s("%f", &x);

	printf("Ответ: %0.2f", x <= 7 ? 3 * x - 9 : 1 / (x * x - 4));

	// при х = 5 ответ 3 * 5 - 9 = 6.
	// при х = 8 ответ 1 / (64 - 4) = 0,01666... то есть округлённо 0,02.

	return 0;
}