#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int* arr;
};
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
int isFull(struct stack *s)
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
void push(struct stack *s)
{
    if (isFull(s)==1)
    {
        printf("Stack overflow.\n");
    }
    else if(isFull(s)==0)
    {
        printf("Enter the number to pushed :- ");
        s->top++;
        scanf("%d",&s->arr[s->top]);
    }
    
}
void pop(struct stack *s)
{
    if (isEmpty(s)==1)
    {
        printf("Stack underflow.\n");
    }
    else if(isEmpty(s)==0)
    {
        printf("Number popped is %d.",s->arr[s->top]);
        s->top--;
    }
    
}
void display(struct stack *s)
{
    printf("Data in stack :- \n");
    for (int i = 0; i <= s->top; i++)
    {
        printf("%d ",s->arr[i]);
    }
    
}
void peek(struct stack *s)
{
    int peak_pos;
    printf("Enter the postition to be peaked :- ");
    scanf("%d",&peak_pos);
    if ((s->top-peak_pos+1)<0)
    {
        printf("Invalid position entered .");
    }
    else
    {
        printf("The element at position %d is %d.",(s->top-peak_pos+1),(s->arr[s->top-peak_pos+1]));
    }
}
int main(int argc, char const *argv[])
{
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->size=6;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
    for (int i = 0; i <s->size; i++)
    {
       push(s);
    }
    display(s);
    printf("\n");
    // pop(s);
    // printf("\nAfetr popping :- \n");
    // display(s);
    peek(s);
    return 0;
}
