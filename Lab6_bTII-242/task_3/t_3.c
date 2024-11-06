#include <locale.h>
#include <stdio.h>
int main()
{
    setlocale(LC_ALL, "ru");
    int N, r1, r2, r3;

    puts("Добрый день! Введите, пожалуйста, число.");
    scanf_s("%d", &N);

    if (0 < N && N < 10)
    {
        r1 = N % 10;
        r2 = 0;
        r3 = 0;
    }
    else if (9 < N && N < 100)
    {
        r1 = N % 10;
        r2 = N / 10;
        r3 = 0;
    }
    else if (99 < N && N < 1000)
    {
        r1 = N % 10;
        r2 = (N / 10) % 10;
        r3 = N / 100;
    }

    printf((r1 == 5 || r2 == 5 || r3 == 5) ? "Цифра 5 входит." : "Цифра 5 не входит.");

    return 0;
}