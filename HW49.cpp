#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int ary[] = { 1, 2, 3, 4, 5 };
	int len = sizeof(ary)/sizeof(int);
	printf("ó�� �迭�� ����� �� : ");
	for(int i = 0; i < len; i++)
	printf(" %d ", ary[i]);
	if (len % 2 == 1) //Ȧ��
	{
		for(int i = 0; i < (len - 1) / 2; i++)
		{
			int temp;
			temp = ary[i];
			ary[i] = ary[len - i - 1];
			ary[len - i - 1] = temp;
		}
	}
	else //¦��
	{
		for(int i = 0; i < len / 2; i++)
		{
			int temp;
			temp = ary[i];
			ary[i] = ary[len - i - 1];
			ary[len - i - 1] = temp;
		}
	}
	printf("\n���� �迭�� ����� �� : ");
	for(int i = 0; i < len; i++)
	printf(" %d ", ary[i]);
	return 0;
}