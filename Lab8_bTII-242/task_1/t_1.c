#include <locale.h>
#include <stdio.h>

void main()
{
	setlocale(LC_ALL, "ru");
	int n, m, S = 0, k = 0;
	puts("������� ��������:");
	scanf_s("%d", &n);
	scanf_s("%d", &m);

	for (int i = m; i >= n; i--)
	{
		S += i;
		printf("��������� %d ���\n", ++k);
	}

	printf("��������� %d", S);

	return 0;
}