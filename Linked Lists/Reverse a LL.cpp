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

void insert(node* &head,int val)
{
    node* n=new node(val);
    
    if(head==NULL)
    {
        head=n;
    }
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

void reverse(node* &head)
{
    node* prev=NULL;
    node* curr=head;
    node* nex=curr->next;
    while(curr->next!=NULL)
    {
        curr->next=prev;
        prev=curr;
        curr=nex;
        nex=nex->next;
    }
    head=curr;
}
int main()
{
    node* head=NULL;
    char ch='y';
    cout<<"Creating a Linked List:"<<endl;
    while(ch=='y'||ch=='Y')
    {
        int n;
        cout<<"Enter the value to be inserted:";
        cin>>n;
        insert(head,n);
        cout<<"Do you want to insert more elements(Y/N): ";
        cin>>ch;
    }
    display(head);

    reverse(head);
    display(head);
}