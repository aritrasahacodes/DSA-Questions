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

 int length(node* head)
 {
    int l=1;
    while(head!=NULL)
    {
        l++;
        head=head->next;
    }
    return l;
 }

 void deletek(node* &head,int k)
 {
    int l=length(head);
    int diff=l-k;
    if(diff-1==0)
    {
        node* todelete=head;
        head=head->next;
        delete todelete;
        return;
    }
    node* temp=head;
    int count=0;
    while(temp!=NULL && count<diff-2)
    {
        temp=temp->next;
        count++;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
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
    node* head=NULL;
    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<=5;i++)
        insert(head,arr[i]);
    display(head);
    deletek(head,4);
    display(head);
 }