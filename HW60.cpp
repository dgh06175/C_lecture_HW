#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define RESIDENT_NUMBER_LENGTH  13 /* �ֹε�Ϲ�ȣ ����*/
int availabilityCheck(char* resident_number);
int checkLengthCharacter(char* resident_number);
int checkDate(char* resident_number);
int checkIdentification(char* resident_number);
int checkGender(char* resident_number);
int checkYear(int year);

int main()
{
    /* �׽�Ʈ�� �ֹε�Ϲ�ȣ ���� �迭*/
    char resident_number[][20] = { "0402291000008", "870401102321", "00031541949179",
        "0003154194917", "801203#201122", "7804155328845", "7804150328840",
        "9612241068382", "9902292194322", "0230174326176", "8811391042219",
        "8100122042213", "8112002042213", "9210101069415", "0802294012345",
"8806311069417","8807311069418" };
    int i, count;
    /* �˻��� �ֹε�Ϲ�ȣ�� ���� ���*/
    count = sizeof(resident_number) / sizeof(resident_number[0]);
    for (i = 0; i < count; i++) /* �ֹε�Ϲ�ȣ ��ȿ�� �˻縦 �ݺ������� ���� ��*/
    {
        if (availabilityCheck(resident_number[i]) == TRUE)
        {
            printf("(+) �ֹι�ȣ%s��(��) ��ȿ�� ��ȣ�Դϴ�.\n", resident_number[i]);
        }
        else
        {
            printf("(-) �ֹι�ȣ%s��(��) ��ȿ���� ���� ��ȣ�Դϴ�.\n", resident_number[i]);
        }
    }
    return 0;
}
/*----------------------------------------------------------------
  availabilityCheck()�Լ�: �ֹε�Ϲ�ȣ ��ȿ�� �˻� �Լ�
  ��������: ��ȿ�� �˻��� �ֹε�Ϲ�ȣ(���ڿ�)
  ���ϰ�: ��ȿ�ϸ�TRUE, ��ȿ���� ������FALSE ����
------------------------------------------------------------------*/
int availabilityCheck(char* resident_number)
{
    typedef int(*func_t)(char*);
    func_t p[4] = { checkLengthCharacter, checkDate, checkGender, checkIdentification };
    for (int i = 0; i < 4; i++)
    {
        if (p[i](resident_number) == FALSE) return FALSE;
    }
    return TRUE;
}

/*-------------------------------------------------------------------------
  checkLengthCharacter()�Լ�: �ֹε�Ϲ�ȣ ���� �� ���� ��ȿ���˻� �Լ�
  ��������: �˻��� �ֹε�Ϲ�ȣ(���ڿ�)
  ���ϰ�: �ֹε�Ϲ�ȣ�� ���̰� �°� ���ڹ��ڷθ� �����Ǿ� ������TRUE,
           ���̰� ª�ų� ���, ���� ���ڰ� �ƴ� ���ڰ� ���� ������FALSE ����
--------------------------------------------------------------------------*/
int checkLengthCharacter(char* resident_number)
{
    int count;
    count = 0;
    if (strlen(resident_number) > 13) return FALSE;
    else {
        for (int i = 0; i < 13; i++) {
            if (!(resident_number[i] >= '0' && resident_number[i] <= '9'))count++;
            else;
        }
        if (count == 0)return TRUE;
        else return FALSE;
    }
}

/*----------------------------------------------------------------
  checkDate()�Լ�: ù6�ڸ�(��,��,��)�� ��ȿ�� �˻� �Լ�
  ��������: ��ȿ�� �˻��� �ֹε�Ϲ�ȣ(���ڿ�)
  ���ϰ�: ��ȿ�� ��¥�̸�TRUE, ��ȿ���� ���� ��¥�̸�FALSE ����
------------------------------------------------------------------*/
int checkDate(char* resident_number)
{
    int y, m = 0, d = 0, n, k = TRUE;
    if (resident_number[6] == '1' || resident_number[6] == '2') y = 1900;
    else y = 2000;
    y += (resident_number[0] - '0') * 10 + resident_number[1] - '0';
    m += (resident_number[2] - '0') * 10 + resident_number[3] - '0';
    d += (resident_number[4] - '0') * 10 + resident_number[5] - '0';
    n = checkYear(y);
    if (y < 1900 || m < 1 || d < 1 || m > 12) k = FALSE; //  ������ �Ÿ���
    switch (m) { // ���� �ʰ��ϼ� �Ÿ���, ����� 2�� 29�� �Ÿ���
    case 1: if (d > 31) k = FALSE; break;
    case 2:if (n == 1 && d > 29) k = FALSE;
           else if (n == 0 && d > 28) k = FALSE; break;
    case 3:if (d > 31)k = FALSE; break;
    case 4:if (d > 30)k = FALSE; break;
    case 5:if (d > 31)k = FALSE; break;
    case 6:if (d > 30)k = FALSE; break;
    case 7:if (d > 31)k = FALSE; break;
    case 8:if (d > 31)k = FALSE; break;
    case 9:if (d > 30)k = FALSE; break;
    case 10:if (d > 31)k = FALSE; break;
    case 11:if (d > 30)k = FALSE; break;
    case 12:if (d > 31)k = FALSE; break;
    default: k = FALSE;
    }
    return k;
}

/*----------------------------------------------------------------------
  checkGender()�Լ�: 7��° �ڸ��� �����ĺ���ȣ ��ȿ�� �˻��Լ�
  ��������: ��ȿ�� �˻��� �ֹε�Ϲ�ȣ(���ڿ�)
  ���ϰ�: �����ĺ���ȣ��'1'~'4'�̸�TRUE, �� �� ���� �����̸�FALSE ����
-----------------------------------------------------------------------*/
int checkGender(char* resident_number)
{
    if (resident_number[6] < '1' || resident_number[6]>'4') return FALSE;
    else return TRUE;
}

/*------------------------------------------------------------------------
  checkIdentification()�Լ�: �ֹε�Ϲ�ȣ ���ڸ�(�ν���) ��ȿ�� �˻� �Լ�
  ��������: ��ȿ�� �˻��� �ֹε�Ϲ�ȣ(���ڿ�)
  ���ϰ�: ��ȿ�� �ν����̸�TRUE, ��ȿ���� ���� �ν����̸� FALSE ����
-------------------------------------------------------------------------*/
int checkIdentification(char* resident_number)
{
    int sum = 0;
    for (int i = 0; i < 12; i++)
        sum += resident_number[i] - '0';
    if (sum % 10 == resident_number[12] - '0') return TRUE;
    else return FALSE;
}

/*----------------------------------------------------------------
 checkYear ()�Լ�: �⵵�� ��,��� ���� �˻�
  ��������: ��,��� �˻��� �⵵
  ���ϰ�: �����̸� TRUE, ����̸�FALSE ����
------------------------------------------------------------------*/
int checkYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)return TRUE;
    else return FALSE;
}



