#define _CRT_SECURE_NO_WARNINGS
#include<locale.h>
#include <stdio.h>
#include <string.h>



int main()
{
    setlocale(LC_ALL, "RUS");
    int x, f, N;
    f = 0;
    int c;
    c = 1;
    do {
        puts("������� ������������ �����");
        scanf("%i", &x);
        N = x;
        while (x != 0)
        {
            if ((x % 10) % 2 == 0)
                f += 1;
            x = x / 10;
        }
        printf("� ���� %i %i ������ ����\n", N, f);
        f = 0;
        N = 0;
        puts("����������?(1-��,2-���)");
        scanf("%i", &c);
    } while (c != 0);
}
