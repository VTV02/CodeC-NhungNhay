#ifndef __QUEUE_H
#define __QUEUE_H

typedef struct
{
    int front;//phần tử đầu của queue
    int rear;//phần tử cuối của queue
    int used;
    int size;//số phần tử đang có trong queue
    int capacity;//kích thước tối đa của Queue
    int *array;//mảng 1 chiều tượng trưng cho Queue
}Queue;
Queue *create_queue(int capacity);
//bool isEmtpty(Queue *queue);
//bool isFull(Queue *queue);
int enQueue(Queue *queue, int item);
int deQueue(Queue *queue, int *item);
int getFront(Queue *queue);
int getRear(Queue *queue);

#endif // __QUEUE_H
