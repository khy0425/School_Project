/*
    작성일 : 2021 - 03 - 11
    작정자 : 김 호영
    소스파일 내용 : 세 정수를 입력 받고 입력 받은 값의 최소값을 구하기.
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

    printf("입력한 %d, %d, %d 중 가장 작은 수는 %d 입니다.", x, y, z, min);

    return 0;
}
