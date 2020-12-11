#include "queue.h"
#include "stack.h"
#include <stdio.h>


stack stack_over_queue()
{
    stack s;
    s.q1=queue_new();
    s.q2=queue_new();
    return s;
}

void stack_over_queue_push(stack *s, int x)
{

    queue_insert(&s->q2,x);
    while(isempty(&s->q1)!=1)
    {
        queue_insert(&s->q2, queue_delete(&s->q1));
    }
    while(isempty(&s->q2)!=1)
    {
        queue_insert(&s->q1, queue_delete(&s->q2));
    }

}

int stack_over_queue_pop(stack *s)
{
    int x;
    x=queue_delete(&s->q1);
    return x;
}


int main()
{
    stack s=stack_over_queue();
    int x;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&x);
        stack_over_queue_push(&s,x);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ", stack_over_queue_pop(&s));
    }

    return 0;
}