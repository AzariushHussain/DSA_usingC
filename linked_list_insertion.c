#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void display_ll(struct node* ptr)
{
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
void inset_at_start(struct node* head)
{
    struct node *new=(struct node*)malloc(sizeof(new));
    printf("Enter the number to insert at start :- ");
    scanf("%d",&new->data);
    new->next=head;
    head=new;
    display_ll(head);

}
void insert_in_between(struct node* head)
{
    int index,index_count=0,number;
    struct node *new=(struct node*)malloc(sizeof(new));
    struct node *prev=(struct node*)malloc(sizeof(new));
    prev=head;
    printf("Enter the index at which the number is to be inserted (<5):- ");
    scanf("%d",&index);
    printf("Enter the data to be inserted :-  ");
    scanf("%d",&number);
    while (index_count != index-1)
    {
        prev=prev->next;
        index_count++;
    }
    new->next=prev->next;
    prev->next=new;
    new->data=number;

    display_ll(head);

}
void insert_at_end(struct node* head)
{
    int number;
    printf("Enter the number to be inserted at the end :- ");
    scanf("%d",&number);
    struct node *new=(struct node*)malloc(sizeof(new));
    struct node *prev=(struct node*)malloc(sizeof(new));

    prev=head;
    while (prev->next!= NULL)
    {
        prev=prev->next;
    }
    new->next=NULL;
    prev->next=new;
    new->data=number;
    display_ll(head);
    

}
int main(int argc, char const *argv[])
{
    struct node *head=(struct node*)malloc(sizeof(struct node));
    struct node *second=(struct node*)malloc(sizeof(struct node));
    struct node *third=(struct node*)malloc(sizeof(struct node));
    struct node *fourth=(struct node*)malloc(sizeof(struct node));
    struct node *fifth=(struct node*)malloc(sizeof(struct node));
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=fourth;
    fourth->data=4;
    fourth->next=fifth;
    fifth->data=5;
    fifth->next=NULL;
    // inset_at_start(head);
    // insert_in_between(head);
    insert_at_end(head);
    return 0;
}
