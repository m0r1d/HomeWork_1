#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
//---------------
//sum ����� ����
//chai ������
//---------------
void main()
    {
	setlocale(LC_ALL, "RUS");
	  int sum;
	  int chai;
	     puts("������� ����� ����:");
	     scanf("%d",&sum);
		    chai = ((sum / 100) * 15) * 4;
	     printf("�������� ������� %d �. �������", chai);
	getchar();
    }