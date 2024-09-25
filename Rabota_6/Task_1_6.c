#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	int yeas,ost;
	puts("Введите год:");
	scanf("%d",&yeas);
	ost=yeas%4;
	if ((ost==0 && yeas%100!=0)||(yeas%400==0))
		printf("%d год Високосный", yeas);
	else
		printf("%d год НЕ Високосный", yeas);




}