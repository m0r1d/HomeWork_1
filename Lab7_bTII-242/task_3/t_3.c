#include <locale.h>
#include <stdio.h>

void main()
{
	int y, k, res;

	setlocale(LC_ALL, "ru");
	printf("Введите день недели, которым является 1 января (используя цифры, то есть понедельник - 1, вторник - 2 и т.д): ");
	scanf_s("%d", &y);
	printf("Введите день: ");
	scanf_s("%d", &k);
	res = k % 7;

	switch (y)
	{
	case 1:
		switch (res)
		{
		case 0:
			printf("Этот день - понедельник.)");
			break;
		case 1:
			printf("Этот день - вторник.)");
			break;
		case 2:
			printf("Этот день - среда.)");
			break;
		case 3:
			printf("Этот день - четверг.)");
			break;
		case 4:
			printf("Этот день - пятница.)");
			break;
		case 5:
			printf("Этот день - суббота.)");
			break;
		case 6:
			printf("Этот день - воскресенье, ура!)");
			break;
		}
		break;
	case 2:
		switch (res)
		{
		case 0:
			printf("Этот день - вторник.)");
			break;
		case 1:
			printf("Этот день - среда.)");
			break;
		case 2:
			printf("Этот день - четверг.)");
			break;
		case 3:
			printf("Этот день - пятница.)");
			break;
		case 4:
			printf("Этот день - суббота.)");
			break;
		case 5:
			printf("Этот день - воскресенье, ура!)");
			break;
		case 6:
			printf("Этот день - понедельник.)");
			break;
		}
		break;
	case 3:
		switch (res)
		{
		case 0:
			printf("Этот день - среда.)");
			break;
		case 1:
			printf("Этот день - четверг.)");
			break;
		case 2:
			printf("Этот день - пятница.)");
			break;
		case 3:
			printf("Этот день - суббота.)");
			break;
		case 4:
			printf("Этот день - воскресенье, ура!)");
			break;
		case 5:
			printf("Этот день - понедельник.)");
			break;
		case 6:
			printf("Этот день - вторник.)");
			break;
		}
		break;
	case 4:
		switch (res)
		{
		case 0:
			printf("Этот день - четверг.)");
			break;
		case 1:
			printf("Этот день - пятница.)");
			break;
		case 2:
			printf("Этот день - суббота.)");
			break;
		case 3:
			printf("Этот день - воскресенье, ура!)");
			break;
		case 4:
			printf("Этот день - понедельник.)");
			break;
		case 5:
			printf("Этот день - вторник.)");
			break;
		case 6:
			printf("Этот день - среда.)");
			break;
		}
		break;
	case 5:
		switch (res)
		{
		case 0:
			printf("Этот день - пятница.)");
			break;
		case 1:
			printf("Этот день - суббота.)");
			break;
		case 2:
			printf("Этот день - воскресенье, ура!)");
			break;
		case 3:
			printf("Этот день - понедельник.)");
			break;
		case 4:
			printf("Этот день - вторник.)");
			break;
		case 5:
			printf("Этот день - среда.)");
			break;
		case 6:
			printf("Этот день - четверг.)");
			break;
		}
		break;
	case 6:
		switch (res)
		{
		case 0:
			printf("Этот день - суббота.)");
			break;
		case 1:
			printf("Этот день - воскресенье, ура!)");
			break;
		case 2:
			printf("Этот день - понедельник.)");
			break;
		case 3:
			printf("Этот день - вторник.)");
			break;
		case 4:
			printf("Этот день - среда.)");
			break;
		case 5:
			printf("Этот день - четверг.)");
			break;
		case 6:
			printf("Этот день - пятница.)");
			break;
		}
		break;
	case 7:
		switch (res)
		{
		case 0:
			printf("Этот день - воскресенье, ура!)");
			break;
		case 1:
			printf("Этот день - понедельник.)");
			break;
		case 2:
			printf("Этот день - вторник.)");
			break;
		case 3:
			printf("Этот день - среда.)");
			break;
		case 4:
			printf("Этот день - четверг.)");
			break;
		case 5:
			printf("Этот день - пятница.)");
			break;
		case 6:
			printf("Этот день - суббота.)");
			break;
		}
		break;
	default:
		printf("Неверно указано 1 января!");
	}
	return 0;
}