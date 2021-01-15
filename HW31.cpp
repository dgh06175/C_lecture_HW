#pragma warning(disable : 4996)
#include <stdio.h>
char menu(void);
int inputInt(const char*);
int deposit(void);
int withdraw(int);

int main()
{
	char option;
	int money = 0;
	printf("* ���� �ܾ��� 0�� �Դϴ�.\n\n");
	while (1)
	{
		option = menu();
		if (option == 'i')
		{
			money += deposit();
			printf("* ���� �ܾ��� %d�� �Դϴ�.\n\n", money);
		}
		else if (option == 'o')
		{
			money += withdraw(money);
			printf("* ���� �ܾ��� %d�� �Դϴ�.\n\n", money);
		}
		else if (option == 'q')
		{
			break;
		}
		else
			printf("* �߸� �Է��ϼ̽��ϴ�.\n\n");
	}
	return 0;
}

char menu(void)
{
	char op;
	printf("# �޴��� �Է��Ͻÿ�(i-�Ա�, o-���, q-����) : ");
	scanf(" %c", &op);
	while (getchar() != '\n');
	return op;
}

int inputInt(const char* msg)
{
	int money;
	printf(msg);
	while (scanf("%d", &money) != 1 || money < 0) {
		while (getchar() != '\n');
		printf("* �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ��� : ");
	}
	return money;
}

int deposit(void)
{
	return inputInt("# �Աݾ��� �Է��ϼ��� : ");
}

int withdraw(int money)
{
	int mon = inputInt("# ��ݾ��� �Է��ϼ��� : ");
	if (money < mon) {
		printf("* �ܾ��� �����մϴ�.\n");
		return 0;
	}
	return -mon;
}
