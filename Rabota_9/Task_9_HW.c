//#define _CRT_SECURE_NO_WARNINGS
//#define ROW 4   
//#define COL 10  
//#include <stdio.h>
//#include <locale.h>
//
//int main() {
//    setlocale(LC_ALL, "RUS");
//    int height; // Высота треугольника
//    int l;
//    char symbol; // Символ для рисования треугольника
//
//    printf("Введите высоту прямоугольного треугольника: ");
//    scanf("%d", &height);
//    printf("Введите ширину треугольника: ");
//    scanf("%d", &l);
//    printf("Введите символ для рисования треугольника: ");
//    scanf(" %c", &symbol); // Пробел перед %c позволяет игнорировать предыдущие символы новой строки
//
//    int row = 0; // Счетчик строк
//    while (row < height) {
//        int col = 0; // Счетчик столбцов
//        while (col < l) {
//            // Проверка, нужно ли выводить символ
//            if (col == 0 || row == height - 1 || col == row) {
//                printf("%c ", symbol);
//            }
//            else {
//                printf("  "); // Печатаем пробелы для пустого места
//            }
//            col++;
//        }
//        printf("\n"); // Переход на новую строку после завершения строки
//        row++;
//    }
//    return 0;
//}