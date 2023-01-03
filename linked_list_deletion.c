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
        printf(" %d ",ptr->data);
        ptr=ptr->next;
    }
}
void deleting_first_node(struct node* head)
{
    struct node* ptr=head;
    head=head->next;
    free(ptr);
    display_ll(head);
}
void deleting_node_in_between(struct node* head)
{
    int index,index_count=0;
    printf("Enter the index to be deleted :-  ");
    scanf("%d",&index);
    struct node*prev=head;
    while (index_count!= index-1)
    {
        prev=prev->next;
        index_count++;
    }
    struct node* next1=prev->next;
    prev->next=next1->next;
    free(next1);
    display_ll(head);
    
}
void deleting_node_at_end(struct node* head)
{
    struct node* ptr=head;
    struct node* last=ptr->next;
    while (last->next != NULL)
    {
        ptr=ptr->next;
        last=last->next;
    }
    ptr->next=last->next;
    free(last);
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
    printf("Original data :-  \n");
    display_ll(head);
    printf("\n");
    printf("After operation :- \n");
    deleting_first_node(head);
    // deleting_node_in_between(head);
    // deleting_node_at_end(head);
    return 0;
}
