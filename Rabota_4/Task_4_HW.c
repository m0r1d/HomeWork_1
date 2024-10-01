#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
//---------------
//sum сумма чека
//chai чаевые
//---------------
void main()
    {
	setlocale(LC_ALL, "RUS");
	  int sum;
	  int chai;
	     puts("¬ведите сумму чека:");
	     scanf("%d",&sum);
		    chai = ((sum / 100) * 15) * 4;
	     printf("ќфициант получил %d р. чаевыми", chai);
	getchar();
    }