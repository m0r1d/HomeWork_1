#include <locale.h>
#include <stdio.h>
void main()
{
	setlocale(LC_ALL, "ru");
	float x;

	puts("������ ����! �������, ����������, �.");
	scanf_s("%f", &x);

	printf("�����: %0.2f", x <= 7 ? 3 * x - 9 : 1 / (x * x - 4));

	// ��� � = 5 ����� 3 * 5 - 9 = 6.
	// ��� � = 8 ����� 1 / (64 - 4) = 0,01666... �� ���� ��������� 0,02.

	return 0;
}