/*
    �ۼ��� : 2021 - 03 - 17
    ������ : �� ȣ��
    �ҽ����� ���� : �迭�� �Է� �ް�, ���� ���� �� ��쿡�� i ���� �߰��Ͽ� ���ڿ��� ���̸� Ȯ�� �� �� �ֽ��ϴ�.
 */

#include <stdio.h>

int main(void)
{
    char study[] = "C �� ���� �ֽ��ϴ�.";
    printf("%s ", study);

    char word[100];
    int i = 0;

    printf("���� �ܾ �ϳ� �Է��Ͻÿ� : ");
    scanf("%s", word);

    while (word[i] != '\0')
    {
        i++;
    }
    printf("���ڿ��� ���� : %d \n", i);

    return 0;
}