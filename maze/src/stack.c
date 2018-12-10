#include "stack.h"

#include <stdlib.h>

stack_t *stack_new()
{
    stack_t *stack = malloc(sizeof(stack_t));
    stack->top = NULL;

    return stack;
}

bool stack_empty(stack_t *stack)
{
    return stack == NULL || stack->top == NULL;
}

int stack_size(stack_t *stack)
{
    stack_frame_t *frame = stack->top;
    int size = 0;

    while (frame != NULL)
    {
        ++size;
        frame = frame->next;
    }
    return size;
}

int stack_pop(stack_t *stack)
{
    stack_frame_t *frame = stack->top;
    int idx = frame->idx;
    stack->top = frame->next;
    free(frame);
    
    return idx;
}

void stack_push(stack_t *stack, int idx)
{
    stack_frame_t *frame = malloc(sizeof(stack_frame_t));
    frame->idx = idx;
    frame->next = stack->top;
    stack->top = frame;
}
