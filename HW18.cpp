#pragma warning(disable : 4996)
#include <stdio.h>

int get_age(void);
int get_number_of_people(void);
void print_price(int age, int number_of_people);

int main(void)
{
	int age, number_of_people;
	age = get_age();
	number_of_people = get_number_of_people();
	print_price(age, number_of_people);
	return 0;
}

int get_age(void)
{
	int age;
	printf("���尴�� ���̸� �Է��Ͻÿ� : ");
	scanf("%d", &age);
	return age;
}

int get_number_of_people(void)
{
	int number_of_people;
	printf("���尴�� ���� �Է��Ͻÿ� : ");
	scanf("%d", &number_of_people);
	return number_of_people;
}

void print_price(int age, int number_of_people)
{
	int price, discount = 0 , dc_price;
	if (age <= 7)
		price = 500;
	else if (age <= 13)
		price = 700;
	else if (age <= 19)
		price = 1000;
	else if (age <= 55)
		price = 1500;
	else
		price = 500;
	price = price * number_of_people;
	if (number_of_people >= 5)
		discount = price / 10;
	dc_price = price - discount;
	printf("\n����� => %d��\n���αݾ� => %d��\n�����ݾ� => %d��\n", price, discount, dc_price);
}