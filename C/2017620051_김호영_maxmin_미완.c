/*
    �ۼ��� : 2021 - 03 - 11
    ������ : �� ȣ��
    �ҽ����� ���� : 
 */
#include <stdio.h>

int main()
{
    int i, goods, price;
    int min = 100000, max = -100000;
    float sum, avg;
    sum = 0;
    do
    {
        printf("��ǰ������ �Է��Ͻÿ� : ");
        scanf("%d", &goods);
    } while (goods < 1 || goods > 3);
    for (i = 0; i < goods; i++)
    {
        do
        {
            printf("%d��° ��ǰ�� ������ �Է��Ͻÿ�: ", i + 1);
            scanf("%d", &price);
            max = price;
        } while (price < 1000 || price > 10000);
        if (price < min)
        {
            min = price;
            sum = sum + price;
            printf("�ִ밪 : %d\n", max);
            printf("�ּҰ� : %d\n", min);
        }
        else if (price > max)
        {
            printf("���� �۵� �ǿ� ���� max ���� Ŀ��!\n");
            max = price;
            sum = sum + price;
            printf("�ִ밪 : %d\n", max);
            printf("�ּҰ� : %d\n", min);
        }

        else if (price >= min)
        {
            printf("���� �۵� �ǿ�!\n");
            sum = sum + price;
            printf("�ִ밪 : %d\n", max);
            printf("�ּҰ� : %d\n", min);
        }

        else if (price <= max)
        {
            printf("���� �۵� �ǿ�! ���� max ���� ũ�ų� ���ƿ� !\n");
            sum = sum + price;
            printf("�ִ밪 : %d\n", max);
            printf("�ּҰ� : %d\n", min);
        }
    }
    avg = sum / goods;

    printf("�ִ밪: %d �ּҰ�: %d ��հ�: %.0f\n", max, min, avg);

    return 0;
}