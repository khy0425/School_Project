/*
    작성일 : 2021 - 03 - 11
    작정자 : 김 호영
    소스파일 내용 : 
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
        printf("제품개수를 입력하시오 : ");
        scanf("%d", &goods);
    } while (goods < 1 || goods > 3);
    for (i = 0; i < goods; i++)
    {
        do
        {
            printf("%d번째 제품의 가격을 입력하시오: ", i + 1);
            scanf("%d", &price);
            max = price;
        } while (price < 1000 || price > 10000);
        if (price < min)
        {
            min = price;
            sum = sum + price;
            printf("최대값 : %d\n", max);
            printf("최소값 : %d\n", min);
        }
        else if (price > max)
        {
            printf("여기 작동 되요 값이 max 보다 커요!\n");
            max = price;
            sum = sum + price;
            printf("최대값 : %d\n", max);
            printf("최소값 : %d\n", min);
        }

        else if (price >= min)
        {
            printf("여기 작동 되요!\n");
            sum = sum + price;
            printf("최대값 : %d\n", max);
            printf("최소값 : %d\n", min);
        }

        else if (price <= max)
        {
            printf("여기 작동 되요! 값이 max 보다 크거나 같아요 !\n");
            sum = sum + price;
            printf("최대값 : %d\n", max);
            printf("최소값 : %d\n", min);
        }
    }
    avg = sum / goods;

    printf("최대값: %d 최소값: %d 평균값: %.0f\n", max, min, avg);

    return 0;
}