#include <locale.h>
#include <stdio.h>

void main()
{
	setlocale(LC_ALL, "ru");
	int n, m, S = 0, k = 0;
	puts("Введите значения:");
	scanf_s("%d", &n);
	scanf_s("%d", &m);

	for (int i = m; i >= n; i--)
	{
		S += i;
		printf("Выполнено %d раз\n", ++k);
	}

	printf("Результат %d", S);

	return 0;
}