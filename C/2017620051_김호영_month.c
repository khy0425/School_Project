/*
    작성일 : 2021 - 03 - 11
    작정자 : 김 호영
    소스파일 내용 : swithch ~ case 문을 활용하여, 월을 입력받으면 해당 달의 날짜 수를 출력. 
    단, 입력 받은 달이 1 ~ 12 가 아니라면 '없는 달' 이라고 출력되도록.
 */

#include <stdio.h>

int main()
{
    int month, days;

    printf("달을 입력하시오: ");
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
        printf("%d 는 없는 달 입니다. \n", month);
        break;
    }
    printf("%d월의 일수는 %d일 입니다. \n", month, days);

    return 0;
}