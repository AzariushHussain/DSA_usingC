#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node* next;
};
void display(struct node* head,struct node* last)
{
    struct node* ptr=head;
    printf("Traversing using next pointer :- ");
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    ptr=last;
    printf("\nTraversing using prev pointer :- ");
    while (ptr!=NULL);
    {
        printf("%d ",ptr->data);
        ptr=ptr->prev;
    }
}
int main(int argc, char const *argv[])
{
    struct node* head=(struct node*)malloc(sizeof(struct node));
    struct node* second=(struct node*)malloc(sizeof(struct node));
    struct node* third=(struct node*)malloc(sizeof(struct node));
    struct node* fourth=(struct node*)malloc(sizeof(struct node));
    struct node* fifth=(struct node*)malloc(sizeof(struct node));
    head->prev=NULL;
    head->data=1;
    head->next=second;
    second->prev=head;
    second->data=2;
    second->next=third;
    third->prev=second;
    third->data=3;
    third->next=fourth;
    fourth->prev=third;
    fourth->data=4;
    fourth->next=fifth;
    fifth->prev=fourth;
    fifth->data=5;
    fifth->next=NULL;
    display(head,fifth);
    return 0;
}
