#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
//Function to diaplay circular linked list.
void dislpay_circularll(struct node* head)
{
    struct node* ptr=head;
    do
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    } while (ptr!=head);
    
}
//Function that'll insert the given value in head's place.
void insert_at_head(struct node* head)
{
    printf("Enter the valte to be inserted :- ");
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&ptr->data);
    struct node*p=head->next;
    while (p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    printf("After insertion at head :-\n");
    dislpay_circularll(head);


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
    fifth->next=head;
    printf("Original data :-  \n");
    dislpay_circularll(head);
    printf("\n");
    insert_at_head(head);
    return 0;
}
