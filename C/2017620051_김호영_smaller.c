/*
    �ۼ��� : 2021 - 04 - 23
    �ۼ��� : ��ȣ��
    �ҽ����� ���� : 3���� ������ �Է¹޾� ���� ���� ���� ����մϴ�.
 */

#include <stdio.h>

int main()
{
    int x, y, z, min;

    printf("ù��° ���� : ");
    scanf("%d", &x);

    printf("�ι�° ���� : ");
    scanf("%d", &y);

    printf("����° ���� : ");
    scanf("%d", &z);

    if (x < y && x < z)
    {
        min = x;
    }
    else if (y < x && y < z)
    {
        min = y;
    }
    else
    {
        min = z;
    }

    printf("�Է��� %d, %d, %d�� ���� ���� ���� %d �Դϴ�. \n", x, y, z, min);

    return 0;
}
