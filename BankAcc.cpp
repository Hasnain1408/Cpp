#include<iostream>

using namespace std;

struct node
{
    char name[20],type[20];
    int acNo;
    double amount;

    struct node* next = NULL;
};

typedef struct node st;

void createAccount(st* head)
{
    st* ptr =(st*)malloc(sizeof(st));
    st* current = (st*)malloc(sizeof(st));


    cout<<"Account number : "<<endl;
    cin>>ptr ->acNo;
    cout<<"Account N/T/A"<<endl;
    cin>> ptr -> name>> ptr -> type>> ptr -> amount;

    if(head ->next == NULL)
    {
         cout<<"Hi"<<endl;
        head = ptr;
        return;
    }

     current = head;

    //cout<<head -> amount<<endl;
   // cout<<"Hi"<<endl;

    if(current -> acNo ==  ptr -> acNo )
    {
        cout<<"Account already exists."<<endl;
        return;
    }


    while(current -> acNo != ptr -> acNo && current -> next != NULL)
    {
        cout<<"Hello"<<endl;
        current = current -> next;
    }



    current -> next = ptr;

}

void displayAccount(st* head)
{
    st* current = (st*)malloc(sizeof(st));
     current = head;
    cout<<"##"<<endl;
    while(current != NULL)
    {
        cout<<current ->acNo<<"\t"<< current ->name<<"\t"<<current ->type<<"\t" << current ->amount<<endl;
        cout<<"***"<<endl;
        current = current -> next;
   }

}

int main()
{
    st* head =(st*)malloc(sizeof(st));

    head -> next = NULL;
    cout<<head -> next <<endl;

    createAccount(head);
    cout<<head -> next <<endl;


    createAccount(head);
     displayAccount(head);

    return 0;
}

