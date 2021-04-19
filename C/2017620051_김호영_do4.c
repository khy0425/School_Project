/*
    작성일 : 2021 - 03 - 11
    작정자 : 김 호영
    소스파일 내용 : do ~ while 문을 활용해, 입력 받은 값의 나머지가 5가 아닐 경우에는 result 값에 추가.
    맞을 때 까지 반복 후, 입력받은 수가 5로 나눴을 때 나머지가 0일 때 result값을 명시.
 */

#include <stdio.h>

int main()
{
    int multiple;
    int result = 0;

    do
    {
        printf("정수를 입력하시오(5의 배수이면 종료) : ");
        scanf("%d", &multiple);
        if (multiple % 5 == 0)
        {
            result = result + multiple;
        }
        else
        {
            result = result + multiple;
        }
    } while (multiple % 5 != 0);
    printf("입력된 정수들의 총 합계 : %d", result);
    return 0;
}