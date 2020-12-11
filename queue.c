#include "queue.h"
#include <stdio.h>


queue queue_new()
{
    queue qu;
    qu.f_el=0;
    qu.l_el=0;
    return qu;
}

void queue_insert(queue *qu, int el)
{
    if(qu->l_el>MAX)
    {
        printf("queue is over!");
        return;
    }
    else
    {   
        qu->q[qu->l_el]=el;
        qu->l_el++;
    }
}

int isempty(queue *qu)
{
    if(qu->f_el==qu->l_el)
    {
        return 1;
    }
    return 0;
}



int queue_delete(queue *qu)
{
    if(isempty(qu)==1)
    {
        printf("queue is empty");
        return 0;
    }
    int x;
    x=qu->q[qu->f_el];
    for(int i=0;i<qu->l_el;i++)
    {
        qu->q[i]=qu->q[i+1];
    }
    qu->l_el--;
    return x;
}


