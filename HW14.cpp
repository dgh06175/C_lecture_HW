#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>

int main()
{
	char a[20];
	int length, i = 0;
	printf("* ���ڿ� �Է� : ");
	scanf("%s", a);
	length = strlen(a) / 2;
	printf("[");
	while (i++ < (signed int)strlen(a) - length)
		printf(" ");
	i = 0;
	while (i < length)
	{
		printf("%c", a[i]);
		i++;
	}
	printf("...]");
	return 0;
}