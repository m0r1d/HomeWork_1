//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <locale.h>
//#include <math.h>
//#define _USE_MATH_DEFINES 
//
//#define M_PI 3.14159265358979323846
//
//
//int task2()
//{
//	setlocale(LC_CTYPE, "RUS");
//
//	double x;
//	double t = 0.3;
//
//
//
//	scanf("%lf", &x);
//
//
//	double a = log10(fabs(t * x + t * t));
//	double b = x * t * t + sqrt(x);
//	double y = log(a * a / (a + b));
//
//	printf("�����: %lf", y);
//	// ����������� ������ 
//	// ��� �=5.2  -4.138419
//	// ��� �=29.315 -2.302837
//
//
//
//
//	int A = a, B = b, C = y;
//
//	puts("");
//	if ((A % 2) != (B % 2))
//		printf("������� ���������� �.� A % 2 = %d B % 2 = %d", A % 2, B % 2);
//
//	else
//		printf("������� ������������ �.� A % 2 = %d B % 2 = %d", A % 2, B % 2);
//
//	puts("");
//	if (A % 3 == 0 && B % 3 == 0 && C % 3 == 0)
//		printf("������� ���������� �.� A % 3 = %d, B % 3 = %d, � % 3 = %�", A % 3, B % 3, C % 3);
//
//	else
//		printf("������� ������������ �.� A % 3 = %d, B % 3 = %d, � % 3 = %d", A % 3, B % 3, C % 3);
//
//
//	return 0;
//}
//
//
//int homeworklab5()
//{
//	double x;
//	double y;
//	double z;
//
//	scanf("%lf", &x);
//	scanf("%lf", &y);
//	scanf("%lf", &z);
//	double a = pow(2, -x);
//	double f = pow(x + fabs(y), 1 / 4.f);
//	double g = pow(exp(x - 1 / sin(x)), 1 / 3.f);
//	printf("%lf", a * f * g);
//	// ����������� ������ 1.26185
//}
//
//
//
//
//int main()
//{
//	task2();
//	homeworklab5();
//}