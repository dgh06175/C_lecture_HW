#pragma warning(disable : 4996)
#include <stdio.h>

int main()
{
	double height, add = 0.0;
	for (int i = 0; i < 5; i++) {
		printf("- %d �� �л��� Ű��? ", i + 1);
		scanf("%lf", &height);
		add += height;
	}
	printf("�ټ� ���� ��� Ű�� %.1lf cm �Դϴ�.\n", add / 5);
	return 0;
}