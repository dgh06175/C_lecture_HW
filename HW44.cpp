#pragma warning (disable : 4996)
#include <stdio.h>
void input(int*, int*);
int e_or_o(int, int);
void print(int, int, int);

int main()
{
	int start, end;
	input(&start, &end);
	print(start, end, e_or_o(start, end));
}

void input(int* start, int* end)
{
	while (1) {
		printf("# ���� ���� �Է��Ͻÿ� : ");
		while (scanf("%d", start) != 1) {
			while (getchar() != '\n');
			printf("# ���� ���� �Է��Ͻÿ� : ");
		}
		if (*start > 0) break;
	}
	while (1) {
		printf("# �� ���� �Է��Ͻÿ� : ");
		while (scanf("%d", end) != 1) {
			while (getchar() != '\n');
			printf("# �� ���� �Է��Ͻÿ� : ");
		}
		if (*end > * start) break;
	}
}

int e_or_o(int start, int end)
{
	char e_o;
	while (1){
		printf("* %d~%d ������ ¦���� ���� ���ұ��? Ȧ���� ���� ���ұ��?(¦��:e/Ȧ��:o) : ", start, end);
		scanf(" %c", &e_o);
		if (e_o == 'e') return 0;
		if (e_o == 'o') return 1;
	}
}

void print(int start, int end, int e_o)
{
	int sum = 0;
	printf("  %d~%d ������ ¦��(", start, end);
	if (e_o == 0){
		for (int i = start; i <= end; i++){
			if (i % 2 == 0) {
				printf("%d ", i);
				sum += i;
			}
		}
	}
	else {
		for (int i = start; i <= end; i++) {
			if (i % 2 == 1) {
				printf("%d ", i);
				sum += i;
			}
		}
	}
	printf("\b)�� ���� %d �Դϴ�.\n", sum);

}