/*
    작성일 : 2021 - 04 - 23
    작성자 : 김호영
    소스파일 내용 : 3개의 정수를 입력받아 가장 작은 수를 출력합니다.
 */

#include <stdio.h>

int main()
{
    int x, y, z, min;

    printf("첫번째 정수 : ");
    scanf("%d", &x);

    printf("두번째 정수 : ");
    scanf("%d", &y);

    printf("세번째 정수 : ");
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

    printf("입력한 %d, %d, %d중 가장 작은 수는 %d 입니다. \n", x, y, z, min);

    return 0;
}
