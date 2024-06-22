#include <stdio.h>
#include <stdlib.h>
#include"queue.h"
int main()
{
    int item;
    Queue *queue = create_queue(100);
    enQueue(queue,1);
    enQueue(queue,2);
    enQueue(queue,3);
    enQueue(queue,4);
    deQueue(queue,&item);
    printf("%5d\n",getFront(queue));
    printf("%5d\n",getRear(queue));
    printf("%5d\n",item);
    printf("%5d\n",getFront(queue));
    printf("%5d\n",getRear(queue));
    /*printf("%5d",item);
    deQueue(queue,&item);
    printf("%5d",item);
    deQueue(queue,&item);
    printf("%5d",item);
    deQueue(queue,&item);
    printf("%5d",item);*/
    return 0;
}
