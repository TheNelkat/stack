#ifndef STACK_H
#define STACK_H

typedef struct stack
{
    queue q1;
    queue q2;
}stack;

stack stack_over_queue();
void stack_over_queue_push(stack *s, int x);
int stack_over_queue_pop(stack *s);


#endif