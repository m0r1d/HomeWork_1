//#define _CRT_SECURE_NO_WARNINGS
//#define ROW 4   
//#define COL 10  
//#include <stdio.h>
//#include <locale.h>
//
//int main() {
//    setlocale(LC_ALL, "RUS");
//    int height; // ������ ������������
//    int l;
//    char symbol; // ������ ��� ��������� ������������
//
//    printf("������� ������ �������������� ������������: ");
//    scanf("%d", &height);
//    printf("������� ������ ������������: ");
//    scanf("%d", &l);
//    printf("������� ������ ��� ��������� ������������: ");
//    scanf(" %c", &symbol); // ������ ����� %c ��������� ������������ ���������� ������� ����� ������
//
//    int row = 0; // ������� �����
//    while (row < height) {
//        int col = 0; // ������� ��������
//        while (col < l) {
//            // ��������, ����� �� �������� ������
//            if (col == 0 || row == height - 1 || col == row) {
//                printf("%c ", symbol);
//            }
//            else {
//                printf("  "); // �������� ������� ��� ������� �����
//            }
//            col++;
//        }
//        printf("\n"); // ������� �� ����� ������ ����� ���������� ������
//        row++;
//    }
//    return 0;
//}