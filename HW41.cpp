#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int i, j;
	char chr;
	printf("* ������ �빮�� �Է�('A' ~ 'Z') : ");
	while (1)
	{
		scanf(" %c", &chr);
		if (chr >= 'A' && chr <= 'Z') {
			for (i = 0; i <= chr - 'A'; i++)
			{
				for (j = chr; j >= chr - i; j--)
				{
					printf("%c", j);
				}
				printf("\n");
			}
		}
		else break;
		printf("\n * ������ �빮�� �Է�('A' ~ 'Z') : ");
	}
}