#pragma warning(disable : 4996)
#include <stdio.h>
int menu(void);
int openFan(void);
int offFan(void);
int reverseFan(int);
void displayFan(int);

int main()
{
	int mu;
	unsigned char state = 0;
	displayFan(state);
		while (1) {
		mu = menu();
		if (mu == 1) {
			state = state | openFan();
			displayFan(state);
		}
		else if (mu == 2) {
			state = state & offFan();
			displayFan(state);
		}
		else if (mu == 3) {
			state = reverseFan(state);
			displayFan(state);
		}
		else
			break;
	}
		return 0;
}

int menu(void)
{
	int n;
	printf("\n1. ȯǳ�� ���� / 2. ȯǳ�� �ݱ� / 3. ȯǳ�� ��ü ��ȯ / 4. ���� : ");
	while (scanf("%d", &n) != 1 || n > 4 || n < 1)
	{
		while (getchar() != '\n');
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
	}
	while (getchar() != '\n');
	return n;
}

int openFan(void)
{
	int n;
	printf("-----------------------------------------------------------------\n");
	printf("\t\t\tFan ���� �۾� ���� ȭ��\n");
	printf("-----------------------------------------------------------------\n");
	printf(" * OPEN�� FAN ��ȣ�� �Է��Ͻÿ�(1-8) : ");
	while (scanf("%d", &n) != 1 || n < 1 || n > 8)
	{
		while (getchar() != '\n');
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
	}
	while (getchar() != '\n');
	return 1 << (n - 1);
}

int offFan(void)
{
	int n;
	printf("-----------------------------------------------------------------\n");
	printf("\t\t\tFan �ݱ� �۾� ���� ȭ��\n");
	printf("-----------------------------------------------------------------\n");
	printf(" * CLOSE�� FAN ��ȣ�� �Է��Ͻÿ�(1-8) : ");
	while (scanf("%d", &n) != 1 || n < 1 || n > 8)
	{
		while (getchar() != '\n');
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
	}
	while (getchar() != '\n');
	return 0x00FF - (1 << (n - 1));
}

int reverseFan(int state)
{
	printf("-----------------------------------------------------------------\n");
	printf("\t\t\tFan ��ü ��ȯ �۾� ���� ȭ��\n");
	printf("-----------------------------------------------------------------\n");
	printf("��ü FAN�� ���°� ��ȯ�Ǿ����ϴ�. (ON, OFF ���� �ڹٲ�)\n");
	return 0x00FF - state;
}

void displayFan(int num)
{
	int res;
	printf("-----------------------------------------------------------------\n");
	for (int i = 8; i > 0; i--)
		printf("%d��FAN  ", i);
	printf("\n");
	for (int j = 7; j >= 0; j--)
	{
		res = num & 1 << j;
		if (res != 0)
			printf("  ON    ");
		else
			printf("  OFF   ");
	}
	printf("\n-----------------------------------------------------------------\n\n");
}