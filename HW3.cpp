#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int total_second, hour, minute, remain;
	printf("�ʸ� �Է��Ͻÿ� : ");
	scanf("%d", &total_second);
	hour = total_second / 3600;
	remain = total_second - hour * 3600;
	minute = remain / 60;
	remain = remain - minute * 60;

	printf("%d�ʴ� %d�ð� %d�� %d�� �Դϴ�.\n", total_second, hour, minute, remain);

	return 0;
}