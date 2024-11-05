#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

double sin_n(double x, int N) {
    double sum = 0.0;
    int i;

    for (i = 0; i < N; i++) {
        sum += pow(-1, i) * pow(x, 2 * i + 1) / factorial(2 * i + 1);
    }

    return sum;
}

double sin_eps(double x, double eps) {
    double sum = x;
    double term = x;
    int i = 1;

    while (fabs(term) > eps) {
        term *= -x * x / (factorial(2 * i) * (2 * i + 1));
        sum += term;
        i++;
    }

    return sum;
}

int factorial(int n) {
    int fact = 1;
    int i;

    for (i = 2; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    setlocale(LC_ALL, "RUS");
    double x, eps;
    int N;

    printf("¬ведите значение дл€ x: ");
    scanf("%lf", &x);

    printf("¬ведите число членов р€да дл€ sin_n: ");
    scanf("%d", &N);

    printf("¬ведите желаемую точность дл€ sin_eps: ");
    scanf("%lf", &eps);

    printf("sin(x) использу€ стандартную библиотеку: %lf\n", sin(x));
    printf("sin(x) использу€ sin_n: %lf\n", sin_n(x, N));
    printf("sin(x) использу€ sin_eps: %lf\n", sin_eps(x, eps));

    return 0;
}