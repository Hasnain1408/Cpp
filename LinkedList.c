#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node *head;

void createLinkedList(struct node* head, int p)
{
    struct node *ptr=malloc(sizeof(struct node));
    ptr=head;

    struct node *current;

    int data;
    int i=0;
    while(i<p)
    {
       current=malloc(sizeof(struct node));

        scanf("%d",&data);
        current -> data= data;
        current -> next= NULL;
        ptr -> next = current;
        ptr = ptr -> next;

        i++;
    }

}
//method 01
struct node* add_at_beg(struct node* head, int data)
{
    struct node *ptr=malloc(sizeof(struct node));

    ptr -> data = data;
    ptr -> next = head;
    head = ptr;

    return head;
}

//method 02
void add_at_start(struct node** ptp, int data)
{
    struct node *ptr=malloc(sizeof(struct node));

    ptr -> data = data;
    ptr -> next = *ptp;
    *ptp= ptr;
}

void add_at_pos(struct node* head,int pos,int data)
{

    struct node *temp=malloc(sizeof(struct node));
    temp -> data = data;
    temp -> next = NULL;

    printf("Hi\n");

    pos--;
    while(pos-- !=1)
    {
        //ptr = ptr -> next;
        head = head -> next;
    }

    temp -> next = head-> next;
    head -> next = temp;
}

void add_at_end(struct node* head, int data)
{
    struct node *ptr;
    ptr=head;

    struct node *temp=malloc(sizeof(struct node));
    temp -> data = data;
    temp -> next = NULL;

    while(ptr -> next != NULL)
    {
        ptr = ptr -> next;
    }

    ptr -> next = temp;
}

struct node* del_first(struct node* head)
{
    if(head == NULL)
    {
        printf("The list is already empty!!");
        return NULL;
    }
    struct node *temp=malloc(sizeof(struct node));
    temp = head;

    head = head -> next;

    free(temp);
    temp = NULL;

    return head;
}

void del_at_pos(struct node* head,int pos)
{
    struct node *ptr=head;

    pos--;
    while(pos !=1)
    {
        ptr = ptr -> next;
        pos--;
    }
    //free(ptr -> next);
    ptr -> next = ptr -> next -> next;


}

void del_last(struct node* head)
{
    if(head == NULL)
    {
        printf("The list is already empty!!");
        return ;
    }
    else if(head -> next == NULL)
    {
        free(head);
        head = NULL;
    }
    struct node *temp;

    while(head -> next -> next != NULL)
    {
         head = head -> next;
    }

    free(head -> next);
    head -> next = NULL;
}

void del_entire(struct node **head)
{
    struct node * ptr = head;

    while(ptr != NULL)
    {
        ptr = ptr -> next;
        free(*head);
        *head = ptr;

    }
}

void traverseLinkedList(struct node *ptr)
{
    int count=0;
    while(ptr != NULL)
    {
        count++;
        printf("%d -> ",ptr -> data);
        ptr = ptr -> next;
    }
    printf("NULL\n");
    printf("Numbers Of node : %d\n",count);

}

int main(void)
{
    int data;
    head = malloc(sizeof(struct node));

    scanf("%d",&data);
    head -> data= data;
    head -> next= NULL;


    struct node *current=malloc(sizeof(struct node));

    scanf("%d",&data);
    current -> data= data;
    current -> next= NULL;
    head -> next=current;

    current=malloc(sizeof(struct node));

    scanf("%d",&data);
    current -> data= data;
    current -> next= NULL;
    head -> next -> next=current;


    traverseLinkedList(head);


    createLinkedList(head -> next -> next,3);

    traverseLinkedList(head);

    scanf("%d",&data);
    add_at_end(head, data);
    traverseLinkedList(head);

    //method 01
    scanf("%d",&data);
    head = add_at_beg(head, data);
    traverseLinkedList(head);

    //method 02
    scanf("%d",&data);
    add_at_start(&head, data);
    traverseLinkedList(head);

    add_at_pos(head,3,99);
    traverseLinkedList(head);

    head = del_first(head);
    traverseLinkedList(head);

    del_last(head);
    traverseLinkedList(head);

    del_at_pos(head,3);
    traverseLinkedList(head);

    del_entire(&head);
    traverseLinkedList(head);


    return 0;
}





