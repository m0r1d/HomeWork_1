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
//    printf("������� ������� �����: ");
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
//    printf("���������� ������ ���� � �����: %d\n", even_count);
//    
//        printf("\n����������? y = ��, n = ���: ");
//        scanf("%c", &c);
//        while (1)
//
//        {
//            char a;
//            printf(����������� ? (�� - y, ��� - n)�);
//            if ((a = getchar()) == �n�) break;
//        }
//    return 0;
//}