#include<stdio.h>
void main()
{
    int i = 10, j = 20;
    int *ptr;
    printf("\n i�� ��= %d \n j�� �� = %d", i, j);
    printf("\n i�� �޸� �ּ�(&i) = %u", &i);
    printf("\n j�� �޸� �ּ�(&j) = %u", &j);

    ptr = &i;

    printf("\n\n << ptr = &i ���� >>");
    printf("\n ptr�� �޸� �ּ�(&ptr) = %u", &ptr);
    printf("\n ptr�� ��(ptr) = %u", ptr);
    printf("\n ptr�� ���� ��(*ptr) = %d", *ptr);

    ptr = &j;

    printf("\n\n << ptr = &j ���� >>");
    printf("\n ptr�� �޸� �ּ�(&ptr) = %u", &ptr);
    printf("\n ptr�� ��(ptr) = %u", ptr);
    printf("\n ptr�� ��(*ptr) = %d", *ptr);

    i = *ptr;
    printf("\n\n << i=*ptr ���� >>");
    printf("\n i�� �� = %d", i);
    getchar();
}