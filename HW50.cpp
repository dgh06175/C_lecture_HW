#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
int input(char *, char *);
int strcheck(char *, char);

int main()
{
	int n;
	char str[99], chr;
	if(input(str, &chr)==0);
	else {
		n = strcheck(str, chr);
		if (n == -1)
			printf("\"%s\"���ڿ� �ȿ� '%c'���ڴ� �������� �ʽ��ϴ�.\n", str, chr);
		else
			printf("\"%s\"���ڿ� �ȿ� '%c'���ڴ� %d�� ��ġ�� �����մϴ�.\n", str, chr, n);
	}
}

int input(char *str, char *chr)
{
	printf("# ���ڿ��� �Է��Ͻÿ� : ");
	scanf("%s", str);
	if (strcmp(str, "end") == 0)return 0;
	while (getchar() != '\n');
	printf("# ���ڸ� �Է��Ͻÿ� : ");
	scanf(" %c", chr);
	while (getchar() != '\n');
}

int strcheck(char *str, char chr)
{
	int n = -1;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == chr)
			n = i;
	}
	return n;
}