#include <locale.h>
#include <stdio.h>
void main()
{
	setlocale(LC_ALL, "ru");
	int yeas, res1, res2, res3;

	puts("������ ����! �������, ����������, ���.");
	scanf_s("%d", &yeas);

	res1 = yeas % 4;
	res2 = yeas % 100;
	res3 = yeas % 400;

	if ((res1 == 0 && res2 != 0) || res3 == 0) printf("��� %d ����������.", yeas);
	else printf("��� %d �� ����������.", yeas);
	return 0;
}