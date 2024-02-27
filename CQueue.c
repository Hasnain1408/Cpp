#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define size 5

struct cqueue{
    int item[size];
    int front,rear;
};
typedef struct cqueue qe;

void createQueue(qe* cq)
{
    cq -> front = cq -> rear = -1;
}

bool isFull(qe* cq)
{
   return (cq -> front == cq -> rear+1) || (cq -> front == 0 && cq -> rear == size -1);
}

bool isEmpty(qe* cq)
{
    return cq -> front == -1;
}

void enQueue(qe* cq, int value)
{
    if(isFull(cq))
    {
        printf("Queue is Full !!\n");
        return;
    }

    if(cq -> front == -1) cq -> front= 0;
    cq -> rear = (cq -> rear + 1)%size;

    cq -> item[cq ->rear] = value;

    printf("%d is Inserted !!\n", cq -> item[cq -> rear]);

}

void deQueue(qe* cq)
{
    if(isEmpty(cq))
    {
      printf("Queue is Empty !!\n");
      return;
    }

    printf("%d is Deleted !!\n", cq -> item[cq -> front]);

    if(cq -> front == cq -> rear) cq -> front = cq -> rear = -1;
    else  cq -> front = (cq -> front + 1)%size;
}

void display(qe* cq)
{
    if(isEmpty(cq))
    {
      printf("Queue is Empty !!\n");
      return;
    }

     printf("Front : %d \n ", cq -> front);
    int i = cq -> front;
    while(i != cq -> rear)
    {
        printf("%d -> ", cq -> item[i]);
      i=(i+1)%size;
    }

     printf("%d \n", cq -> item[i]);
     printf("Rear : %d  \n", cq -> rear);
}

int main()
{
    qe* cq = (qe*)malloc(sizeof(qe));
    createQueue(cq);

    deQueue(cq);

    enQueue(cq,2);
    enQueue(cq,3);
    enQueue(cq,5);
    enQueue(cq,7);
    enQueue(cq,9);
    enQueue(cq,10);
    display(cq);
    deQueue(cq);

    enQueue(cq,11);
    enQueue(cq,13);
    display(cq);

    return 0;
}
