#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>

int main()
{
	char name[20];
	double height;
	char sex;
	printf("#���� �Է� : ");
	fgets(name, strlen(name), stdin);
	int len = strlen(name);
	name[len - 1] = '\0';
	printf("#Ű �Է�(cm����) : ");
	scanf("%lf", &height);
	printf("#�����Է�(M/F) : ");
	scanf(" %c", &sex);
	if (sex == 'M')
		printf("%s���� Ű�� %.2lf�̰� �����Դϴ�", name, height);
	else
		printf("%s���� Ű�� %.2lf�̰� �����Դϴ�", name, height);
	return 0;
}