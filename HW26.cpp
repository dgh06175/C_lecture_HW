#pragma warning(disable : 4996)
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int input(int);
void output(int, int);

int main()
{
	int com, result, win = 0, draw = 0;
	srand((unsigned int)time(NULL));
	while (1)
	{
		com = rand() % 3 + 1;
		result = input(com);
		if (result == 1)
			win++;
		else if (result == 2)
			draw++;
		else if (result == 4) {
			printf("�����Դϴ�.\n");
			break;
		}
		else
			break;
	}
	printf("\n���Ӱ�� : %d�� %d��\n", win, draw);
	return 0;
}

int input(int com)
{
	int user;
	printf("# ������ 1, ������ 2, ���� 3 �߿��� �����ϼ��� : ");
	scanf("%d", &user);
	while (getchar() != '\n');
	if (user == 1) {
		if (com == 1) {
			output(user, com);
			return 2;
		}
		if (com == 2) {
			output(user, com);
			return 1;
		}
		if (com == 3) {
			output(user, com);
			return 3;
		}
	}
	else if (user == 2) {
		if (com == 1) {
			output(user, com);
			return 3;
		}
		if (com == 2) {
			output(user, com);
			return 2;
		}
		if (com == 3) {
			output(user, com);
			return 1;
		}
	}
	else if (user == 3) {
		if (com == 1) {
			output(user, com);
			return 1;
		}
		if (com == 2) {
			output(user, com);
			return 3;
		}
		if (com == 3) {
			output(user, com);
			return 2;
		};
	}
	else {
		printf("�ٽ� �Է����ּ���.\n");
		return input(com);
	}
	return 4;
}

void output(int user, int com)
{
	if (user == 1) {
		if (com == 1) {
			printf("����� ����, ��ǻ�ʹ� ���� ���� : �����ϴ�.\n");
		}
		if (com == 2) {
			printf("����� ����, ��ǻ�ʹ� ���� ���� : �̰���ϴ�.\n");
		}
		if (com == 3) {
			printf("����� ����, ��ǻ�ʹ� �� ���� : �����ϴ�.\n");
		}
	}
	else if (user == 2) {
		if (com == 1) {
			printf("����� ����, ��ǻ�ʹ� ���� ���� : �����ϴ�.\n");
		}
		if (com == 2) {
			printf("����� ����, ��ǻ�ʹ� ���� ���� : �����ϴ�.\n");
		}
		if (com == 3) {
			printf("����� ����, ��ǻ�ʹ� �� ���� : �̰���ϴ�.\n");
		};
	}
	else if (user == 3) {
		if (com == 1) {
			printf("����� ��, ��ǻ�ʹ� ���� ���� : �̰���ϴ�.\n");
		}
		if (com == 2) {
			printf("����� ��, ��ǻ�ʹ� ���� ���� : �����ϴ�.\n");
		}
		if (com == 3) {
			printf("����� ��, ��ǻ�ʹ� �� ���� : �����ϴ�.\n");
		};
	}
}
