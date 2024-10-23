//#define _CRT_SECURE_NO_WARNINGS
//#include<locale.h>
//#include <stdio.h>
//#include <string.h>
//char c;
//
//
//int main() {
//    setlocale(LC_ALL, "RUS");
//    char number[101]; 
//    int even_count = 0; 
//
//    printf("Введите длинное число: ");
//    scanf("%100s", &number); 
//    int length = strlen(number);
//
//
//    for (int i = 0; i < length; i++) {
//        
//        if (number[i] >= '0' && number[i] <= '9') {
//           
//            int digit = number[i] - '0'; 
//           
//            if (digit % 2 == 0) {
//                even_count++;
//            }
//        }
//    }
//
//    printf("Количество четных цифр в числе: %d\n", even_count);
//    
//        printf("\nПродолжить? y = Да, n = Нет: ");
//        scanf("%c", &c);
//        while (1)
//
//        {
//            char a;
//            printf(“Продолжить ? (Да - y, нет - n)”);
//            if ((a = getchar()) == ’n’) break;
//        }
//    return 0;
//}