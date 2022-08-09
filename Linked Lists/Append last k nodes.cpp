#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertend(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL)
        head=n;
    else
    {
        node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=n;
    }
}

void display(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

int length(node* head)
{
    int l=0;
    while(head!=NULL)
    {
        l++;
        head=head->next;
    }
    return l;
}

node* appendk(node* &head,int k)
{
    int l=length(head);
    k=k%l;
    node* newhead;
    node* newtail;
    node* tail=head;
    int count=1;
    while(tail->next!=NULL)
    {
        if(count==l-k)
            newtail=tail;
        if(count==l-k+1)
            newhead=tail;
        tail=tail->next;
        count++;
    }
    newtail->next=NULL;
    tail->next=head;
    return newhead;
}

int main()
{
    node* head=NULL;
    insertend(head,1);
    insertend(head,2);
    insertend(head,3);
    insertend(head,4);
    insertend(head,5);
    insertend(head,6);
    display(head);
    node* newhead;
    newhead=appendk(head,3);
    display(newhead);
}