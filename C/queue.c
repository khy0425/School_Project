#include <stdio.h>
#include <stdlib.h>
#define Q_SIZE 100

typedef char element; //char���� ť element�� �ڷ������� ����
typedef struct
{
    element queue[Q_SIZE]; // 1���� �迭 ť ����

    int front, rear;
}QueueType;

QueueType *createQueue()    //���� ť�� �����ϴ� ����
{
    QueueType *Q;
    Q = (QueueType *)malloc(sizeof(QueueType));
    Q -> front = -1;    //front �ʱⰪ ����
    Q -> rear = -1;      //rear �ʱⰪ ����
    return Q;
}

int isEmpty(QueueType *Q)   //ť�� �������� Ȯ���ϴ� ����
{
    if(Q -> front == Q -> rear)
    {
        printf("\n Queue is empty! \n");
        return 1;
    }
    else return 0;
}

int isFull(QueueType *Q)    //ť�� ��ȭ�������� Ȯ���ϴ� ����
{
    if(Q -> rear == Q_SIZE - 1)
    {
        printf("\n Queue is full! \n");
        return 1;
    }
    else return 0;
}

void enQueue(QueueType *Q, element item)    //ť�� rear�� ���Ҹ� �����ϴ� ����
{
    if(isFull(Q)) exit(1);
    else
    {
        Q -> rear++;

        Q -> queue[Q->rear] = item;
    }
}

element deQueue(QueueType *Q)   //ť�� front���� ���Ҹ� �����ϰ� ��ȯ�ϴ� ����
{
    if(isEmpty(Q)) exit(1);
    else 
    {
        Q -> front++;
        return Q -> queue[Q->front];
    }

}

void del(QueueType *Q)  //ť�� front���� ���Ҹ� �����ϴ� ����
{
    if(isEmpty(Q)) exit(1);
    else Q->front++;
}

element peek(QueueType *Q)  //ť�� ���� �տ� �ִ� ���Ҹ� �˻��Ͽ� ��ȯ�ϴ� ����
{
    if (isEmpty(Q)) exit(1);
    else return Q -> queue[Q->front + 1];
}

void printQ(QueueType *Q)   //ť�� ������ ����ϴ� ����
{
    int i;
    printf(" Queue : [");
    for(i = Q->front + 1; i <= Q -> rear; i++)
    {
        printf("%3c", Q->queue[i]);
    }
    printf(" ] \n");
}

void main(void)
{
    QueueType *Q1 = createQueue();
    element data;
    printf("���� A>>"); enQueue(Q1, 'A'); printQ(Q1);
    printf("���� B>>"); enQueue(Q1, 'B'); printQ(Q1);
    printf("���� >>"); deQueue(Q1); printQ(Q1);
    printf("���� C>>"); enQueue(Q1, 'C'); printQ(Q1);
    data = peek(Q1); printf(" peek item : %c \n", data);
    printf("���� >>"); deQueue(Q1); printQ(Q1);
    printf("���� >>"); deQueue(Q1); printQ(Q1);

    getchar();
}