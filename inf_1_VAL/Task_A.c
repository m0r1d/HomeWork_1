#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "RUS");
	int a;
	int b;
	float res1;
	int c;
	float res2;
	
	printf("Введите a, b, c:");
	scanf_s(" %d %d %d ", &a,&b,&c);
	res1 =(float)a/(float)b;
	res2 = sqrt(c);
	printf("Какое выражение точнее: 1) %d / %d = %f или 2) sqrt(%d) = %f\n", a, b, res1, c, res2);
	printf("Значения выражений с большим количеством десятичных знаков:\n 1) %d / %d = %f\n 2) sqrt(%d) = %f\n", a, b, res1, c, res2);

}