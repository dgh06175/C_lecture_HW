#pragma warning(disable : 4996)
#include <stdio.h>

int main()
{
	int n, a = 0;
	for (int count = 0; count < 5;) {
		printf("0���� ū���� �Է��Ͻÿ�(%d ��°) : ", count + 1);
		scanf("%d", &n);
		if (n > 0) {
			a  = a + n;
			count++;
		}
	}
	printf("�Էµ� ���� �� �� : %d\n", a);
	return 0;
}