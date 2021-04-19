/*
    작성일 : 2021 - 03 - 17
    작정자 : 김 호영
    소스파일 내용 : 배열을 입력 받고, 값이 존재 할 경우에만 i 값을 추가하여 문자열의 길이를 확인 할 수 있습니다.
 */

#include <stdio.h>

int main(void)
{
    char study[] = "C 언어를 배우고 있습니다.";
    printf("%s ", study);

    char word[100];
    int i = 0;

    printf("영문 단어를 하나 입력하시오 : ");
    scanf("%s", word);

    while (word[i] != '\0')
    {
        i++;
    }
    printf("문자열의 길이 : %d \n", i);

    return 0;
}