#include <locale.h>
#include <stdio.h>

void main()
{
	int y, k, res;

	setlocale(LC_ALL, "ru");
	printf("������� ���� ������, ������� �������� 1 ������ (��������� �����, �� ���� ����������� - 1, ������� - 2 � �.�): ");
	scanf_s("%d", &y);
	printf("������� ����: ");
	scanf_s("%d", &k);
	res = k % 7;

	switch (y)
	{
	case 1:
		switch (res)
		{
		case 0:
			printf("���� ���� - �����������.)");
			break;
		case 1:
			printf("���� ���� - �������.)");
			break;
		case 2:
			printf("���� ���� - �����.)");
			break;
		case 3:
			printf("���� ���� - �������.)");
			break;
		case 4:
			printf("���� ���� - �������.)");
			break;
		case 5:
			printf("���� ���� - �������.)");
			break;
		case 6:
			printf("���� ���� - �����������, ���!)");
			break;
		}
		break;
	case 2:
		switch (res)
		{
		case 0:
			printf("���� ���� - �������.)");
			break;
		case 1:
			printf("���� ���� - �����.)");
			break;
		case 2:
			printf("���� ���� - �������.)");
			break;
		case 3:
			printf("���� ���� - �������.)");
			break;
		case 4:
			printf("���� ���� - �������.)");
			break;
		case 5:
			printf("���� ���� - �����������, ���!)");
			break;
		case 6:
			printf("���� ���� - �����������.)");
			break;
		}
		break;
	case 3:
		switch (res)
		{
		case 0:
			printf("���� ���� - �����.)");
			break;
		case 1:
			printf("���� ���� - �������.)");
			break;
		case 2:
			printf("���� ���� - �������.)");
			break;
		case 3:
			printf("���� ���� - �������.)");
			break;
		case 4:
			printf("���� ���� - �����������, ���!)");
			break;
		case 5:
			printf("���� ���� - �����������.)");
			break;
		case 6:
			printf("���� ���� - �������.)");
			break;
		}
		break;
	case 4:
		switch (res)
		{
		case 0:
			printf("���� ���� - �������.)");
			break;
		case 1:
			printf("���� ���� - �������.)");
			break;
		case 2:
			printf("���� ���� - �������.)");
			break;
		case 3:
			printf("���� ���� - �����������, ���!)");
			break;
		case 4:
			printf("���� ���� - �����������.)");
			break;
		case 5:
			printf("���� ���� - �������.)");
			break;
		case 6:
			printf("���� ���� - �����.)");
			break;
		}
		break;
	case 5:
		switch (res)
		{
		case 0:
			printf("���� ���� - �������.)");
			break;
		case 1:
			printf("���� ���� - �������.)");
			break;
		case 2:
			printf("���� ���� - �����������, ���!)");
			break;
		case 3:
			printf("���� ���� - �����������.)");
			break;
		case 4:
			printf("���� ���� - �������.)");
			break;
		case 5:
			printf("���� ���� - �����.)");
			break;
		case 6:
			printf("���� ���� - �������.)");
			break;
		}
		break;
	case 6:
		switch (res)
		{
		case 0:
			printf("���� ���� - �������.)");
			break;
		case 1:
			printf("���� ���� - �����������, ���!)");
			break;
		case 2:
			printf("���� ���� - �����������.)");
			break;
		case 3:
			printf("���� ���� - �������.)");
			break;
		case 4:
			printf("���� ���� - �����.)");
			break;
		case 5:
			printf("���� ���� - �������.)");
			break;
		case 6:
			printf("���� ���� - �������.)");
			break;
		}
		break;
	case 7:
		switch (res)
		{
		case 0:
			printf("���� ���� - �����������, ���!)");
			break;
		case 1:
			printf("���� ���� - �����������.)");
			break;
		case 2:
			printf("���� ���� - �������.)");
			break;
		case 3:
			printf("���� ���� - �����.)");
			break;
		case 4:
			printf("���� ���� - �������.)");
			break;
		case 5:
			printf("���� ���� - �������.)");
			break;
		case 6:
			printf("���� ���� - �������.)");
			break;
		}
		break;
	default:
		printf("������� ������� 1 ������!");
	}
	return 0;
}