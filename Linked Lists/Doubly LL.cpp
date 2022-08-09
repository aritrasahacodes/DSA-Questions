#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* prev;
    node* next;

    node(int val)
    {
        data=val;
        prev=NULL;
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
        n->prev=temp;
    }
}

void inserthead(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    if(head!=NULL)
        head->prev=n;
    head=n;
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

void deletenode(node* &head,int val)
{
    node* todelete;
    node* temp=head;
    while(temp!=NULL && temp->data!=val)
    {
        temp=temp->next;
    }
    todelete=temp;
    temp->prev->next=temp->next;
    if(temp->next!=NULL)
        temp->next->prev=temp->prev;
    delete todelete;
}

int main()
{
    node* head=NULL;
    insertend(head,1);
    insertend(head,2);
    insertend(head,3);
    insertend(head,4);
    display(head);
    inserthead(head,5);
    display(head);

    deletenode(head,3);
    display(head);
}