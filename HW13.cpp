#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>

int main()
{
	char f_name[10];
	char l_name[10];
	printf("#���� �Է��Ͻÿ� : ");
	scanf("%s", f_name);
	printf("#�̸��� �Է��Ͻÿ� : ");
	scanf("%s", l_name);
	printf("%s   %s\n", f_name, l_name);
	printf("%*d   %*d", strlen(f_name), strlen(f_name), strlen(l_name), strlen(l_name));
	return 0;
}