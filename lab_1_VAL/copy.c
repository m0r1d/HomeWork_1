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
//	//printf("������� ��������� a:\n");
//	//scanf_s("%d",&a);
//	//printf("������� ����������� b:\n");
//	//scanf_s("%d", &b);
//	//printf("������� ����������� ����� c:\n");
//	//scanf_s("%d", &c);
//	//printf("������� ������� a/b:\n");
//	//scanf_s("%f", &ab);
//	//printf("������� ��������� ���������� ����� �� ����� c:\n");
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
//	printf("���������� ����������� ������� %f\n", absch);
//	printf("���������� ����������� ���������� ����� %f\n", abskor);
//
//	float otnosch = (absch / ab) * 100;
//	float otnoskor = (abskor / sc) * 100;
//	printf("������������� ����������� ������� %f\n", otnosch);
//	printf("������������� ����������� ���������� �����  %f\n", otnoskor);
//
//
//	if (otnosch > otnoskor) {
//		printf("����� ������ ��������� sqrt %f\n", c);
//	}
//	else {
//		printf("����� ������ ��������� %f/%f \n", a, b);
//	}
//	//�
//	double x = 3.6878, y = 0.0013;
//	/*printf("������� y:\n");
//	scanf_s("%d", &y);*/
//	int zn = 0;
//	while (y < 1) {
//		y += 10;
//		zn++;
//	}
//	double rou = round(x * pow(10, zn)) / pow(10, zn);
//	printf("����������� �����:%f\n", rou);
//
//	//�
//	float n;
//	int znachp;
//	printf("%f\n", &n);
//	printf("������� ���-�� ������ ����� �������:\n");
//	scanf_s("%d", &znachp);
//	float abspogr = 0.5 * pow(10, -znachp);
//	printf("���������� ���������� �����������: %lf\n", abspogr);
//	float otnpogr = abspogr / n;
//	printf("���������� ������������� �����������: %lf\n", otnpogr);
//}
//
//
//
