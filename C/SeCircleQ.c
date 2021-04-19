#include <stdio.h>
#include <stdlib.h>
#define cQ_SIZE 4

typedef char element;
typedef struct
{
    element queue[cQ_SIZE];
    int front, rear;
}cQueueType;

cQueueType *createQueue()
{
    cQueueType *cQ;
    cQ = (cQueueType *)malloc(sizeof(cQueueType));
    cQ -> front = 0;
    cQ -> rear = 0;
    return cQ;
}

int isEmpty(cQueueType *cQ)
{
    if(cQ -> front == cQ ->rear)
    {
        printf("\n Circular Queue is empty! \n");
        return 1;
    }
    else return 0;
}

int isFull(cQueueType *cQ)
{
    if(((cQ -> rear +1) % cQ_SIZE) == cQ -> front)
    {
        printf(" Circular Queue is full! \n");
        return 1;
    }
    else return 0;
}

void enQueue(cQueueType *cQ, element item)
{
    if(isFull(cQ))
    {
        getchar();
        exit(1);
    }
    else
    {
        cQ -> rear = (cQ -> rear + 1) % cQ_SIZE;
        cQ -> queue[cQ -> rear] = item;
    }
    
}

element deQueue(cQueueType *cQ)
{
    if(isEmpty(cQ)) exit(1);
    else
    {
        cQ -> front = (cQ -> front + 1) % cQ_SIZE;
        return cQ -> queue[cQ -> front];
    }
    
}

void del(cQueueType *cQ)
{
    if(isEmpty(cQ)) exit(1);
    else
    {
        cQ -> front = (cQ -> front + 1) % cQ_SIZE;
    }
    
}

element peek(cQueueType *cQ)
{
    if(isEmpty(cQ)) exit(1);
    else
    {
        return cQ -> queue[(cQ -> front + 1) % cQ_SIZE];
    }
    
}

void printQ(cQueueType *cQ)
{
    int i, first, last;
    first = (cQ -> front + 1) % cQ_SIZE;
    last = (cQ -> rear + 1) % cQ_SIZE;
    printf(" Circular Queue : [");
    i = first;
    while (i != last)
    {
        printf("%3c", cQ ->queue[i]);
        i = (i + 1) % cQ_SIZE;
    }
    printf(" ] \n");
    
}

void main(void)
{
    cQueueType *cQ1 = createQueue();
    element data;
    printf("»ðÀÔ A >>"); enQueue(cQ1, 'A'); printQ(cQ1);
    printf("»ðÀÔ B >>"); enQueue(cQ1, 'B'); printQ(cQ1);

    printf("»èÁ¦ >>"); deQueue(cQ1); printQ(cQ1);

    printf("»ðÀÔ C >>"); enQueue(cQ1, 'C'); printQ(cQ1);
    data = peek(cQ1); printf("peek item : %c\n", data);
    printf("»ðÀÔ D >>"); enQueue(cQ1, 'D'); printQ(cQ1);

    printf("»ðÀÔ E >>"); enQueue(cQ1, 'E'); printQ(cQ1);

    getchar();
    
}