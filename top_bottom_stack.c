#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int top;
    int size;
    int* arr;
};
int satckTop(struct stack *s)
{
    return s->arr[s->top];
}
int stackBottom(struct stack *s)
{
    return s->arr[0];
}
int isEmpty(struct stack *s)
{
    if (s->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
void push(struct stack *s)
{ 
    int temp;
    printf("Enter the element to be pushed :- ");
    s->top++;
    scanf("%d",&s->arr[s->top]);
}
int isFUll(struct stack *s)
{
    if (s->top==s->size-1)
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
    s->size=5;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
    for (int i = 0; i < s->size; i++)
    {
        if (isFUll(s)==0)
        {
            push(s);
        }
        
    }
    printf("Stack top is %d. \n",satckTop(s));
    printf("Stack bottom is %d .",stackBottom(s));
    return 0;
}
