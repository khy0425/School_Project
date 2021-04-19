/*
    작성일 : 2021 - 03 - 11
    작정자 : 김 호영
    소스파일 내용 : x, y 에 관한 증감연산자의 사용법
 */

#include <stdio.h>

int main()
{
    int x = 10, y = 20;

    printf("x = %d, y = %d \n", x, y);
    int result;

    result = x++;
    printf("x++의 값 =%d \n", result);
    printf("x의 값 =%d \n", x);

    result = --y;
    printf("--y의 값 =%d \n", result);
    printf("y의 값 =%d \n", result);

    return 0;
}
