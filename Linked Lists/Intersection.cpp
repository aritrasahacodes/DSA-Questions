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

int Intersection(node* &head1,node* &head2)
{
    int len1=length(head1);
    int len2=length(head2);
    if(len1<len2)
    {
        int temp=len2;
        len2=len1;
        len1=temp;

        node* tem=head1;
        head1=head2;
        head2=tem;
    }

    int diff=len1-len2;
    node* temp1=head1;
    int count=0;
    while(temp1!=NULL && count<diff)
    {
        temp1=temp1->next;
    }
    node* temp2=head2;
    while(temp2!=NULL && temp1!=NULL)
    {
        if(temp1->data==temp2->data)
            return temp2->data;
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return -1;

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
    Intersection(head);
}