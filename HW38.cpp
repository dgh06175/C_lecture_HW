#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int money, money1, money2, Cream_p = 500, Shrimp_p = 700, Cola_p = 400, count;
	printf("���� ����� ���� �ݾ� �Է� : ");
	while (scanf("%d", &money))
	{
		money2 = money;
		count = 0;
		if (money >= 1600){
			for (int i = 1; i <= (money - (Shrimp_p + Cola_p)) / Cream_p; i++){
				money1 = money;
				money -= Cream_p * i;
				for (int j = 1; j <= (money - Cola_p) / Shrimp_p; j++){
					money2 = money;
					money -= Shrimp_p * j;
					if (money % Cola_p == 0){
						printf("ũ����(%d ��), �����(%d ����), �ݶ�(%d ��)\n", i, j, money / Cola_p);
						count++;
					}
					money = money2;
				}
				money = money1;
			}
			if (count != 0)
				printf("��� �����Ͻðڽ��ϱ�?\n\n���� ����� ���� �ݾ� �Է� : ");
			else
				printf("�ܵ��� �����ϴ�. �ٽ� �Է����ּ��� : ");
		}
		else
			printf("�ٽ� �Է��� �ּ��� : ");
	}
	return 0;
}