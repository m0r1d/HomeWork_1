//#include <stdio.h> 
//#include <stdlib.h> 
//#include <locale.h> 
//#include <math.h>
//
//main() {
//	setlocale(LC_ALL, "");
//
//	float a = 13, b = 17, c = 31;
//	float ab = 0.765, sc = 5.57;
//	//
//	//printf("Введите числитель a:\n");
//	//scanf_s("%d",&a);
//	//printf("Введите знаменатель b:\n");
//	//scanf_s("%d", &b);
//	//printf("Введите подкоренное число c:\n");
//	//scanf_s("%d", &c);
//	//printf("Введите частное a/b:\n");
//	//scanf_s("%f", &ab);
//	//printf("Введите результат вычисления корня из числа c:\n");
//	//scanf_s("%f", &sc);
//
//	float pab = a / b;
//	double psc = sqrt(c);
//
//	printf("%f\n", pab);
//	printf("%lf\n", psc);
//
//	float absch = fabs(ab - pab);
//	float abskor = fabs(sc - psc);
//
//	printf("Абсолютная погрешность деления %f\n", absch);
//	printf("Абсолютная погрешность вычисления корня %f\n", abskor);
//
//	float otnosch = (absch / ab) * 100;
//	float otnoskor = (abskor / sc) * 100;
//	printf("Относительная погрешность деления %f\n", otnosch);
//	printf("Относительная погрешность вычисления корня  %f\n", otnoskor);
//
//
//	if (otnosch > otnoskor) {
//		printf("Более точное выражение sqrt %f\n", c);
//	}
//	else {
//		printf("Более точное выражение %f/%f \n", a, b);
//	}
//	//б
//	double x = 3.6878, y = 0.0013;
//	/*printf("Введите y:\n");
//	scanf_s("%d", &y);*/
//	int zn = 0;
//	while (y < 1) {
//		y += 10;
//		zn++;
//	}
//	double rou = round(x * pow(10, zn)) / pow(10, zn);
//	printf("Округленное число:%f\n", rou);
//
//	//в
//	float n;
//	int znachp;
//	printf("%f\n", &n);
//	printf("Введите кол-во знаков после запятой:\n");
//	scanf_s("%d", &znachp);
//	float abspogr = 0.5 * pow(10, -znachp);
//	printf("Предельная абсолютная погрешность: %lf\n", abspogr);
//	float otnpogr = abspogr / n;
//	printf("Предельная относительная погрешность: %lf\n", otnpogr);
//}
//
//
//
