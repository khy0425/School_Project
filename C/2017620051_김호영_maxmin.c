/*
    �ۼ��� : 2021 - 05 - 09
    ������ : �� ȣ��
    �ҽ����� ���� : ��ǰ�� ������ �Է¹ް�, �� �Է� ���� ����ŭ�� ������ �ް� �� ������ �ִ�, �ּ�, ��հ��� ����մϴ�.
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
        } while (price < 1000 || price > 10000);

        if (price < min)
        {
            min = price;
            sum = sum + price;
        }
        else if (price >= min)
        {
            sum = sum + price;
        }
        else if (price > max)
        {
            max = price;
            sum = sum + price;
        }
        else if (price <= max)
        {
            sum = sum + price;
        }
    }
    avg = sum / goods;

    printf("�ִ밪: %d �ּҰ�: %d ��հ�: %.0f\n", max, min, avg);
}