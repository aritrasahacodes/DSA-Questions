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

void rearrange(node* head)
{
    node* tail=head;
    while(tail)
}

int main()
{
    node* head=NULL;
    for(int i=0;i<5;i++)
        insertend(head,i+1);
    display(head);

}