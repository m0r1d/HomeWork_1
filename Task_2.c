#include <stdio.h>
#include <locale.h>

int N , K;
N = 9;
K = 36;

int main()
{
	setlocale(LC_CTYPE, "RUS");
	printf("������ %d ����� %d ����� 00 ������",N ,K );
	getchar();
	printf("��� %d ������ �����",N*60+K );
	getchar();
	printf("�� �������� �������� %d ����� � %d �����", 24 - N, 60 - K);
	getchar();
	printf("� 8:00 ������ %d ������", N * 3600 + K * 60);
	getchar();
	printf("������� ���= %d/24 ����� � ������� ������= %d/60 ����", N, K);
}