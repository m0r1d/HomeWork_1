#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    int n, m; 
    int s = 0; 
    int k = 0; 
    printf("������� �������� n: ");
    scanf("%d", &n);
    printf("������� �������� m: ");
    scanf("%d", &m);
    for (int i = m; i >= n; i--) { 
        s += i; 
        printf("��������� %d ���\n", ++k); 
    }
    printf("���������: %d\n", s);
    return 0;
}