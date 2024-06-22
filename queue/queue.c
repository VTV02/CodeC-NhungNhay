#include<stdio.h>
#include"queue.h"
Queue *create_queue(int capacity)
{
    Queue *qt = (Queue *)malloc(sizeof(Queue));
    qt->front=0;
    qt->rear= -1;
    qt->used=0;
    qt->capacity= capacity;
    qt->array=(int*) malloc(capacity*sizeof(int));
    return qt;
}
static _Bool isEmtpty(Queue *queue)
{
    return(queue->used==0);
}
static _Bool isFull(Queue *queue)
{
    return(queue->used==queue->capacity);
}
int getFront(Queue *queue)
{
    return queue->array[queue->front];
}
int getRear(Queue *queue)
{
    return queue->array[queue->rear];
}
int enQueue(Queue *queue, int item)
{
    if(isFull(queue))
        return -1;
    queue->rear++;
    queue->array[queue->rear]=item;
    queue->used++;
    return 0;
}
int deQueue(Queue *queue, int *item)
{
    if(isEmtpty(queue))
        return -1;
    *item=queue->array[queue->front];
    queue->front++;
    queue->used--;
}

