/*
    �ۼ��� : 2021 - 04 - 23
    ������ : �� ȣ��
    �ҽ����� ���� : swithch ~ case ���� Ȱ���Ͽ�, ���� �Է¹����� �ش� ���� ��¥ ���� ���. 
    ��, �Է� ���� ���� 1 ~ 12 �� �ƴ϶�� '���� ��' �̶�� ��µǵ����մϴ�.
 */

#include <stdio.h>

int main()
{
    int month, days;

    printf("���� �Է��Ͻÿ�: ");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
        days = 31;
        break;
    case 2:
        days = 28;
        break;
    case 3:
        days = 31;
        break;
    case 4:
        days = 30;
        break;
    case 5:
        days = 31;
        break;
    case 6:
        days = 30;
        break;
    case 7:
        days = 31;
        break;
    case 8:
        days = 31;
        break;
    case 9:
        days = 30;
        break;
    case 10:
        days = 31;
        break;
    case 11:
        days = 30;
        break;
    case 12:
        days = 31;
        break;

    default:
        days = 0;
        printf("%d �� ���� �� �Դϴ�. \n", month);
        break;
    }
    printf("%d���� �ϼ��� %d�� �Դϴ�. \n", month, days);

    return 0;
}