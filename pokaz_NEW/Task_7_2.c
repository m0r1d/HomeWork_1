//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include<locale.h>
//
//int main() {
//    setlocale(LC_ALL, "RUS");
//    int number;
//    int last;
//
//    printf("������� ����������� �����: ");
//    scanf("%d", &number);
//    last = number % 10;
//
//    switch (last) {
//    case 0:
//    case 1:
//    case 4:
//    case 6:
//    case 8:
//    case 9:
//        printf("��������� ����� %d - �� ������� �����.\n", last);
//        break;
//    case 2:
//    case 3:
//    case 5:
//    case 7:
//        printf("��������� ����� %d - ������� �����.\n", last);
//        break;
//    default:
//        printf("����������� �����.\n");
//        break; 
//    }
//    return 0; 
//}