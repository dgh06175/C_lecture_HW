#pragma warning(disable : 4996)
#define HOUR_SEC 3600.0
#include <stdio.h>

int main()
{
	double km, km_h, total_hour, sec;
	int hour, min;
	printf("* �Ÿ��� �Է��Ͻÿ�(km����) : ");
	scanf("%lf", &km);
	printf("* �ü��� �Է��Ͻÿ�(km/h����) : ");
	scanf("%lf", &km_h);
	total_hour = km / km_h;
	hour = (int)total_hour;
	min = (int)((total_hour - (double)hour) * 60.0);
	sec = ((total_hour - (double)hour) * 60 - min) * 60;
	printf("%.2lf km = >%d�ð� %d�� %.3lf�� �ҿ��\n", km, hour, min, sec);
	return 0;
}