#pragma warning(disable : 4996)
#include <stdio.h>

int main()
{
	int his, cul, art;
	printf("����, ����, ���� ������ �Է��ϼ��� : ");
	scanf("%d %d %d", &his, &cul, &art);
	printf("������ %d �̰� ����� %.2lf �Դϴ�.\n", his + cul + art, ((double)his + cul + art) / 3);
	return 0;
}