#pragma warning (disable : 4996)
#include <stdio.h>
int input(int *);
void sort(int *, int);
void print(int *, int , int);

int main()
{
	int ary[1000];
	int len = 0;
	for (int i = 0; i < 3; i++)
	{
		printf("\n%d�� �����͸� ��������ÿ� (0�Է½� ����) : ", i + 1);
		len = input(ary);
		print(ary, len, 0);
		sort(ary, len);
		print(ary, len, 1);
	}
}

int input(int* ary)
{
	int i = 0;
	while (1) {
		scanf("%d", &ary[i]);
		if (ary[i] == 0) break;
		++i;
	}
	return i;
}

void sort(int* ary, int len)
{
	int min, tmp, index;

	for (int i = 0; i < len; i++){
		min = 9999;
		for (int j = i; j < len; j++) {
			if (min > ary[j]) {
				min = ary[j];
				index = j;
			}
		}
		tmp = ary[i];
		ary[i] = ary[index];
		ary[index] = tmp;
	}
}

void print(int* ary, int len, int mode)
{
	char chr[2][3] = { "��", "��" };
	printf("# ��Ʈ %s ������ : ", chr[mode]);
	for (int i = 0; i < len; i++)
		printf("%d ", ary[i]);
	printf("\n");
}