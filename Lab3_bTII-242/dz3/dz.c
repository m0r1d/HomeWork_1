#include <locale.h>
#include <stdio.h>

void main()
{
	setlocale(LC_ALL, "ru");
	int a, b, res_pos;
	float res_par;
	printf("������� ������������� ���������:\n");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	res_pos = a + b;
	res_par = 1.0 / a + 1.0 / 2;
	printf("��� ���������������� ���������� - %d\n", res_pos);
	printf("��� ������������ ���������� - %.2f", 1.0 / res_par);

	return 0;
}