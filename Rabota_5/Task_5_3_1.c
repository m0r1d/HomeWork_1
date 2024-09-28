#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    double p, x, b, y, a;  
    puts("Введите значение x:");
    scanf("%lf", &x); 
    p = 0.5;
    b = exp(sqrt(fabs(x)));  
    a = log10(pow(p, 2) + pow(x, 3));
    if (b == 0) {
        printf("Ошибка: деление на ноль.\n");
        return 1;  
    }
    y = (pow(a, 3) / pow(b, 2));  
    printf("Ответ: %.4f\n", y);  
    int A = (int)a;
    int B = (int)b;
    int C = (int)y;
    int condition1 = ((A % 2 == 0) && (B % 2 != 0)) || ((A % 2 != 0) && (B % 2 == 0)); 
    int condition2 = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0); 
    printf("Условие 1 (только одно из A и B четное) выполнено: %d\n", condition1);
    printf("Условие 2 (A, B и C кратно 3) выполнено: %d\n", condition2);
    return 0;  
}