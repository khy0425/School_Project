/*
    작성일 : 2021 - 03 - 17
    작정자 : 김 호영
    소스파일 내용 : get_number 함수로 정수를 입력받고, 입력 받은 정수까지 숫자를 1부터 약수인지 확인 후,
    약수가 맞다면 sum 값에 해당 값을 더하여 입력 받은 수 까지 약수를 확인 후 더합니다.
    이후, main 에서 함수를 호출하여 최종 출력합니다.
 */

#include <stdio.h>
#include <ctype.h>

int prime(int);
int get_number(void);

int main(void)
{

    int n, result;
    n = get_number();
    result = prime(n);
    printf("%d의 약수들의 합은 %d 입니다. \n", n, result);

    return 0;
}

int get_number(void)
{
    int n;
    printf("정수를 입력하시오 : ");
    scanf("%d", &n);

    return n;
}

int prime(int n)
{
    int i, sum = 0;

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d는 약수입니다.\n", i);
            sum += i;
        }
        else
        {
            printf("%d는 약수가 아닙니다.\n", i);
        }
    }
    return sum;
}