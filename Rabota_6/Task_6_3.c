#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	int Vybor;
	int n;
	int n1;
	int n3;
	puts("������� ����� n:");
	scanf("%d", &n);
	if (n>99) n1 = n / 100, n3 = n % 10;
	else
		n1 = n/10, n3 = n%10;
	getchar();
	puts ("����� ����� ��������?");
	puts ("(�������� 1 ��� ������ ������ ����� ��� �������� 3 ��� ������ ���������)");
	scanf("%d",&Vybor);
	if (Vybor==1)
		printf("������ ����� ����� n: %d",n1);
	else
		printf("��������� ����� ����� n: %d",n3);
	getchar();
}