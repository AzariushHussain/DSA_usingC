#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char data;
    struct node* next;
};
int isEmpty(struct node* top){
    if (top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct node ** top)
{
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=')';
    n->next=*top;
    *top=n;
}
int pop(struct node **top)
{
    if (isEmpty(*top))
    {
        return 0;
    }
    else
    {
    struct node* n=*top;
    *top=(*top)->next;
    free(n);
    return 1;
    }
}
int parenthesis_matching(char* exp,struct node* top)
{
    int i=0,pop_check=1;
    while (exp[i]!='\0')
    {
        if(exp[i]=='(')
        {
            push(&top);
        }
        else if (exp[i]==')')
        {
            pop_check=pop(&top);
        }
        i++;
    }
    if (top==NULL && pop_check==1)
    {
        return 1;
    }
    return 0;
    
}
int main(int argc, char const *argv[])
{
    struct node* top=NULL;
    char* exp=(char*)malloc(1024*sizeof(char));
    printf("Enter the expression to be checked :- ");
    gets(exp);
    exp=realloc(exp,sizeof(char)*strlen(exp));
    // puts(exp);
if (parenthesis_matching(exp,top))
    {
        printf("The parenthesis matches prefectly .");
    }
else
{
    printf("Parenthesis dosen't match.");
}
    return 0;
}

