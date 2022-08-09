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
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }   
    temp->next=n;
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

int number(node* head)
{
    int sum=0;
    while(head!=NULL)
    {
        sum=sum*10+head->data;
        head=head->next;
    }
    return sum;
}

int multiply(node* head1,node* head2)
{
    int n1=number(head1);
    int n2=number(head2);
    int mul=n1*n2;
    return mul;
}

int main()
{
    node* head1=NULL;
    node* head2=NULL;
    insert(head1,9);
    insert(head1,4);
    insert(head1,6);
    display(head1);
    insert(head2,8);
    insert(head2,4);
    display(head2);
    cout<<multiply(head1,head2);
}