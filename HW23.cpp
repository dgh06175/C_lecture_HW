#pragma warning(disable : 4996)
#include <stdio.h>

int main()
{
	int a, b, tmp;
	while (1) {
		printf("# �ΰ��� ������ �Է��ϼ��� : ");
		if (scanf("%d %d", &a, &b) != 2)
			break;
		
		if (a < b) {
			tmp = a;
			a = b;
			b = tmp;
		}
		printf("%d - %d = %d\n", a, b, a - b);
	}
	return 0;
}