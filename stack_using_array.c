#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack *s)
{
    if (s->top == s->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main(int argc, char const *argv[])
{
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->size = 6;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
//manually entering data.
    s->arr[0]=90;
    s->top++;
    if (isEmpty(s))
    {
        printf("The stack is empty.");
    }
    else
    {
        printf("The stack isn't empty.");
    }

    return 0;
}
