#include <stdio.h>
#include <locale.h>
void name()
{
	setlocale(LC_ALL, "RUS");
	puts("  ******************************************");
	puts("  *                                        *");
	puts("  * ����: ���������� ����������� ����������*");
	puts("  *                                        *");
	puts("  *   �������� ������ �.�                  *");
	puts("  *                                        *");
	puts(" ******************************************");
}
void date()
{
	setlocale(LC_ALL, "RUS");
	puts(" *****************************************");
	puts("              _   _  _                    ");
	puts("     /||_| /|| | | ||_                    ");
	puts("      |  |  ||_| |_||_|                   ");
}
void main()
{
	setlocale(LC_ALL, "RUS");
	name();
	date();
}