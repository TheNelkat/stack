#ifndef QUEUE_H
#define QUEUE_H
#define MAX 30

typedef struct queue
{
    int q[MAX];
    int f_el,l_el;
}queue;

queue queue_new();
void queue_insert(queue *qu, int el);
int isempty(queue *qu);
int queue_delete(queue *qu);
#endif