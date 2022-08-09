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
    node* n= new node(val);
    if(head==NULL)
        head=n;
    else{
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

node* reversek(node* &head,int k)
{
    int count=0;
    node* prev=NULL;
    node* curr=head;
    node* nex;
    while(curr!=NULL&& count<k)
    {
        nex=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nex;
        count++;
    }
    if(nex!=NULL)
        head->next=reversek(nex,k);

    return prev;
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
    int k=2;
    node* newhead=reversek(head,k);
    display(newhead);
}