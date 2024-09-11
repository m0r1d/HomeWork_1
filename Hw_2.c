#include<stdio.h>
#include<locale.h>
float L, n, k, m;
L = 337;
n = 4;
k = 5;
m = 3;
int main()
{
	setlocale(LC_ALL, "RUS");
	printf("Дано:\n %10g\n %10g\n %12s\n Ответ: %+3f", n, L, "____________", n/L);
	getchar();
}