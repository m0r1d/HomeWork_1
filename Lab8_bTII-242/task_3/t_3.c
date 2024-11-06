#include <locale.h>
#include <stdio.h>
#include <math.h>
#define _USE_VATH_DEFINES

void main()
{
	setlocale(LC_ALL, "ru");
	int n, m;
	float S = 0.0;
	printf("¬ведите степень: ");
	scanf_s("%d", &n);
	if (pow(2, n) < 1024)
		printf("2^%d = %d\n", n, (int)pow(2, n));
	else
		printf("2^%d = %.dK\n", n, (int)pow(2, n) / 1024);
	printf("¬ведите число m: ");
	scanf_s("%d", &m);

	for (int i = 0; i <= n; i++)
	{
		int res;
		res = pow(2, i);
		//S += res;
		if (res < 1024)
			printf("2^%d = %d\n", i, (int)res);
		else
			printf("2^%d = %.1fK\n", i, S / 1024.0);
		S += res;
	}
	return 0;
}