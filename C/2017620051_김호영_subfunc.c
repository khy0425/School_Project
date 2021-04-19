/*
    �ۼ��� : 2021 - 03 - 17
    ������ : �� ȣ��
    �ҽ����� ���� : get_number �Լ��� ������ �Է¹ް�, �Է� ���� �������� ���ڸ� 1���� ������� Ȯ�� ��,
    ����� �´ٸ� sum ���� �ش� ���� ���Ͽ� �Է� ���� �� ���� ����� Ȯ�� �� ���մϴ�.
    ����, main ���� �Լ��� ȣ���Ͽ� ���� ����մϴ�.
 */

#include <stdio.h>
#include <ctype.h>

int prime(int);
int get_number(void);

int main(void)
{

    int n, result;
    n = get_number();
    result = prime(n);
    printf("%d�� ������� ���� %d �Դϴ�. \n", n, result);

    return 0;
}

int get_number(void)
{
    int n;
    printf("������ �Է��Ͻÿ� : ");
    scanf("%d", &n);

    return n;
}

int prime(int n)
{
    int i, sum = 0;

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d�� ����Դϴ�.\n", i);
            sum += i;
        }
        else
        {
            printf("%d�� ����� �ƴմϴ�.\n", i);
        }
    }
    return sum;
}