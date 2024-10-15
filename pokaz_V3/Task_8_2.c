//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//#include <locale.h>
//
//int main() {
//    setlocale(LC_ALL, "RUS");
//    int n; 
//    printf("¬ведите степень n: "); 
//    scanf("%d", &n);
//    for (int i = 0; i <= n; i++) {
//        long long result = (long long)pow(2, i); 
//        printf("%2d^%2d = %10lld\n", 2, i, result);
//    }
//    long long final_result = (long long)pow(2, n);
//    double result_in_K = final_result / 1024.0;
//    printf("–езультат: %.1fK\n", result_in_K);
//    int m; 
//    printf("¬ведите число m: ");
//    scanf("%d", &m);
//    for (int i = 0; pow(2, i) <= m; i++) {
//        long long result = (long long)pow(2, i);
//        printf("%2d^%2d = %10lld\n", 2, i, result); 
//    }
//
//    return 0; 
//}