/*
    작성일 : 2021 - 05 - 09
    작정자 : 김 호영
    소스파일 내용 : 제품의 갯수를 입력받고, 그 입력 받은 수만큼의 가격을 받고 그 가격의 최대, 최소, 평균값을 출력합니다.
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

    printf("최대값: %d 최소값: %d 평균값: %.0f\n", max, min, avg);
}