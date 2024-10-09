//#include <stdio.h>
//#include <math.h>
//#include <locale.h>
//
//int main() 
//{
//    setlocale(LC_ALL, "RUS");
//    double x = 3.74e-2;  // 3.74 * 10^(-2)
//    double y = -0.825;
//    double z = 0.16e2;   // 0.16 * 10^(2)
//    double sin_2 = pow(sin(x), 2);
//    double cos_2 = pow(cos(x), 2);
//    double num = sin_2 * (x + y);
//    double denom = x - (2 * y / (1 + pow(x, 2) * pow(y, 2)));
//    double x_abs_y = pow(x, fabs(y));
//    double arctan = atan(1 / z); // arctg(1/z)
//    double v = 1 + (num / fabs(denom)) * x_abs_y + cos_2 * arctan;
//    printf("Результат v = %.4f\n", v);
//    return 0;
//}