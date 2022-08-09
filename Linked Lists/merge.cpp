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

node* merge(node* &head1,node* &head2)
{
    node* p1=head1;
    node* p2=head2;
    node* dummynode=new node(-1);
    node* p3=dummynode;
    node* temp=dummynode;

    while(p1!=NULL && p2!=NULL)
    {
        if(p1->data<p2->data)
        {
            p3->next=p1;
            p1=p1->next;
            p3=p3->next;
        }
        else
        {
            p3->next=p2;
            p2=p2->next;
            p3=p3->next;
        }
    }
    while(p1!=NULL)
    {
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
    while(p2!=NULL)
    {
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }
    return dummynode->next;
}

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

int main()
{
    node* head1=NULL;
    insertend(head1,1);
    insertend(head1,4);
    insertend(head1,5);
    insertend(head1,7);
    display(head1);
    node* head2=NULL;
    insertend(head2,2);
    insertend(head2,3);
    insertend(head2,6);
    display(head2);
    node* newhead=merge(head1,head2);
    display(newhead);
}