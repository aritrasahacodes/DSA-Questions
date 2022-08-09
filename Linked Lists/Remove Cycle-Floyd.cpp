#include<iostream>
using namespace std;

//turtoise haer algorithm

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
void makeCycle(node* &head,int pos)
{
    int count=0;
    node* temp=head;
    node* startnode;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        count++;
        if(pos==count)
            startnode=temp;
    }
    temp->next=startnode;
}

void removeCycle(node* &head,node* slow)
{
    node* fast=head;
    while(fast!=NULL)
    {
        if(fast->next==slow->next)
        {
            slow->next=NULL;
            return;
        }
        fast=fast->next;
        slow=slow->next;
    }
}

bool detectCycle(node* &head)
{
    node* fast=head;
    node* slow=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;

        if(fast==slow)
        {
            removeCycle(head,slow);
            return true;
        }
    }
    return false;
}

int main()
{
    node* head=NULL;
    char ch='y';
    cout<<"Creating Linked List:"<<endl;
    while(ch=='y'||ch=='Y')
    {
        int n;
        cout<<"Enter the value for new node: ";
        cin>>n;
        insertend(head,n);
        cout<<"Do you want to insert more elements(Y/N): ";
        cin>>ch;
    }
    display(head);

    makeCycle(head,2);
    cout<<detectCycle(head)<<endl;
    cout<<"After clear cycle:";
    display(head);

}