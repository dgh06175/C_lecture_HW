#pragma warning(disable : 4996)
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int input(const char*);
void output(int, int);

int main()
{
	int n = 0, ans, count = 0;
	srand((unsigned int)time(NULL));
	ans = rand() % 100 + 1;
	int a = 0, b = 100;
	while (1)
	{
		n = input("# ���ڸ� �Է��Ͻÿ� : ");
		if (ans != n) {
			if (ans < n) 
				b = n;
			else
				a = n;
		}
		count++;
		if (n == ans) break;
		output(a, b);
	}
	printf("���~ �¾Ҵ�~~~ ��ī��ī~~ %d��° ���� ���߼̽��ϴ�.\n", count);
	return 0;
}

int input(const char* msg)
{
	int n;
	while (1) {
		printf(msg);
		scanf("%d", &n);
		while (getchar() != '\n');
		if (n >= 1 && n<=100) break;
	}
	return n;
}

void output(int a, int b)
{
	printf("%d ���ٴ� ũ�� %d ���ٴ� �۽��ϴ�.\n", a, b);
}