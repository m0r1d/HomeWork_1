#include <stdio.h>
#include <locale.h>

void main()
{
	while (1)
	{
		setlocale(LC_ALL, "ru");
		char c;
		int a;
		printf("������� �����:\n");
		scanf_s("%d", &a);
		for (; a >= 1; ((int)a)/10)
		{
			printf("%3d", ((int)a)%10);
			printf("\n");
		}
		printf("���������� ? (�� - y, ��� - n)");
		if ((c = getchar()) == 'n') break;
	}
	system("pause");
}