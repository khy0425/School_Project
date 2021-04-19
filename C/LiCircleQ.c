//�����ڷᱸ���� ������ ���� ť ���α׷�
#include <stdio.h>
#include <malloc.h>

typedef char element;   //char���� ���� ť element�� �ڷ������� ����
typedef struct QNode    //���� ť�� ��带 ����ü�� ����
{
    element data;
    struct QNode *link;
} QNode;

typedef struct  //���� ť���� ����ϴ� ������ front�� rear�� ����ü�� ����
{
    QNode *front, *rear;
}LQueueType;

LQueueType *createLinkedQueue() //���� ���� ť ���� ����
{
    LQueueType *LQ;
    LQ = (LQueueType *)malloc(sizeof(LQueueType));
    LQ -> front = NULL;
    LQ -> rear = NULL;
    return LQ;
}

int isEmpty(LQueueType *LQ) //���� ť�� �������� Ȯ���ϴ� ����
{
    if(LQ -> front == NULL)
    {
        printf("\n Linked Queue is empty! \n");
        return 1;
    }
    else return 0;
}

void enQueue(LQueueType *LQ, element item)  //���� ť�� rear�� ���Ҹ� �����ϴ� ����
{
    QNode *newNode = (QNode *)malloc(sizeof(QNode));
    newNode -> data = item;
    newNode -> link = NULL;
    if(LQ -> front == NULL)
    {
        LQ -> front = newNode;
        LQ -> rear = newNode;
    }
    else
    {
        LQ -> rear -> link = newNode;
        LQ -> rear = newNode;
    }
    
}
element deQueue(LQueueType *LQ) //���� ť���� front ���Ҹ� �����ϰ� ��ȯ�ϴ� ����
{
    QNode *old = LQ -> front;
    element item;
    if (isEmpty(LQ)) return 0;
    else
    {
        item = old -> data;
        LQ -> front = LQ -> front -> link;
        if(LQ -> front == NULL)
        {
            LQ -> rear == NULL;
        }
        free(old);
        return item;
    }
    
}

int del(LQueueType *LQ) //���� ť���� front ���Ҹ� �����ϴ� ����
{
    QNode *old = LQ -> front;
    if (isEmpty(LQ))
    {
        return 0;
    }else
    {
        LQ -> front = LQ -> front -> link;
        if(LQ -> front == NULL)
        {
            LQ -> rear = NULL;
        }
        free(old);
        return 1;
    }
    
}


element peek(LQueueType *LQ)    //���� ť���� front ���Ҹ� �˻��Ͽ� ��ȯ�ϴ� ����
{
    element item;
    if (isEmpty(LQ))
    {
        return 0;
    }else
    {
        item = LQ -> front -> data;
        return item;
    }
    
}

void printLQ(LQueueType *LQ)    //���� ť�� ����ϴ� ����
{
    QNode *temp = LQ -> front;
    printf(" Linked Queue : [");
    while (temp)
    {
        printf("%3c", temp ->data);
        temp = temp -> link;
    }
    printf(" ] \n");
}

void main(void)
{
    LQueueType *LQ1 =createLinkedQueue();
    element data;
    printf("���� A >>"); enQueue(LQ1, 'A'); printLQ(LQ1);
    printf("���� B >>"); enQueue(LQ1, 'B'); printLQ(LQ1);
    printf("���� >>"); deQueue(LQ1); printLQ(LQ1);
    printf("���� C >>"); enQueue(LQ1, 'C'); printLQ(LQ1);
    data = peek(LQ1); printf(" peek item : %c \n", data);
    printf("���� D >>"); enQueue(LQ1, 'D'); printLQ(LQ1);
    printf("���� E >>"); enQueue(LQ1, 'E'); printLQ(LQ1);

    getchar();
}