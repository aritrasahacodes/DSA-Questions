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

void oddeven(node* &head)
{
    node* odd=head;
    node* even=head->next;
    node* evenstart=head->next;

    while(even->next!=NULL && odd->next!=NULL)
    {
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenstart;
    if(odd->next!=NULL)
    {
        even->next=NULL;
    }
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
    oddeven(head);
    display(head);
}