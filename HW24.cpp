#pragma warning(disable : 4996)
#include <stdio.h>
int input(const char *);
int cal(int);
void print(int, int);

int main()
{
	int depth, day;
	depth = input("�칰�� ���̸� �Է��Ͻÿ�(cm����) : ");
	day = cal(depth);
	print(depth, day);
	return 0;
}

int input(const char* msg)
{
	int depth;
	printf(msg);
	scanf("%d", &depth);
	return depth;
}

int cal(int depth)
{
	int day = 0, up = 0;
	while (up < depth)
	{
		day++;
		up += 50;
		if (up >= depth) break;
		up -=20;
	}
	return day;
}

void print(int depth, int day)
{
	printf("%d ���� ������ �칰�� Ż���ϱ� ���ؼ��� %d���� �ɸ��ϴ�.\n", depth, day);
}