//#define _CRT_SECURE_NO_WARNINGS
//#include<locale.h>
//#include <stdio.h>
//#include <string.h>
//
//
//double fa(double x) {
//    double y;
//
//    if (x > 3) {
//        y = 1.0 / (x * x * x + 3);
//    }
//    else {
//        y = x * x - 3 * x + 9;
//    }
//
//    return y;
//}
//
//double fb(double x) {
//    double y = x * exp(sin(x * x));
//    return y;
//}
//
//int main() {
//    setlocale(LC_ALL, "RUS");
//    double x;
//
//    printf("Введите значение для x: ");
//    scanf("%lf", &x);
//
//    printf("fa(x)=%lf , fb(x)=%lf ", fa(x), fb(x));
//
//    printf("\nПроизведение: %lf", fa(x) * fb(x));
//    printf("\nРазность квадратов: %lf", fa(x) * fa(x) - fb(x) * fb(x));
//    printf("\nУдвоенная сумма: %lf", 2 * (fa(x) + fb(x)));
//
//    return 0;
//}