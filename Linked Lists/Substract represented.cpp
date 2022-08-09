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

void rec(node* &head,int d)
{
    if(!d)
    {
        return;
    }
    int r=d%10;
    d=d/10;
    rec(head,d);
    insert(head,r);
    return;
}
void substract(node* head1,node* head2)
{
    int n1=number(head1);
    int n2=number(head2);
    int diff;
    if(n1>n2)
        diff=n1-n2;
    else
        diff=n2-n1;
    node* h=NULL;
    rec(h,diff);
    display(h);
}
int main()
{
    node* head1=NULL;
    node* head2=NULL;
    insert(head1,9);
    insert(head1,0);
    insert(head1,5);
    display(head1);
    insert(head2,5);
    insert(head2,0);
    insert(head2,2);
    display(head2);
    substract(head1,head2);
}