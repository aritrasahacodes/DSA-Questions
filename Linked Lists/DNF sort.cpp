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
    int l=0;
    while(head!=NULL)
    {
        l++;
        head=head->next;
    }
    return l;
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

 void dnfsort(node* &head)
 {
    int l=length(head);
    int m=l/2;
    int count=1;
    node* temp=head;
    node* low=head;
    node* mid=NULL;
    node* high=head;
    while(high->next!=NULL)
    {
        if(count==m)
        {
            mid=high;
        }
        high=high->next;
        count++;
    }
    int i=0;
    while(temp!=NULL)
    {
        if(mid->data==0)
        {
            int t=mid->data;
            mid->data=low->data;
            low->data=t;
            mid=mid->next;
        }
        else if(mid->data==1)
            mid=mid->next;
        else if(mid->data==2)
        {
            int a=mid->data;
            mid->data=high->data;
            high->data=a;
        }
        temp=temp->next;
        cout<<i;
    }
    cout<<"final:"<<endl;
    display(head);
    return;
 }

 int main()
 {
    node* head=NULL;
    int arr[]={1,0,1,0,1,1};
    for(int i=0;i<=5;i++)
        insert(head,arr[i]);
    display(head);
    dnfsort(head);
    cout<<"HELLO WORLD";
    display(head);

    return 0;
 }