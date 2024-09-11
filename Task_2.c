#include <stdio.h>
#include <locale.h>

int N , K;
N = 9;
K = 36;

int main()
{
	setlocale(LC_CTYPE, "RUS");
	printf("Сейчас %d часов %d минут 00 секунд",N ,K );
	getchar();
	printf("Идёт %d минута суток",N*60+K );
	getchar();
	printf("До полуночи осталось %d часов и %d минут", 24 - N, 60 - K);
	getchar();
	printf("С 8:00 прошло %d секунд", N * 3600 + K * 60);
	getchar();
	printf("Текущий час= %d/24 суток и текущая минута= %d/60 часа", N, K);
}