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
void deletepos(node* &head,int pos)
{
    node* temp=head;
    int count=1;
    while(temp!=NULL && count<pos-1)
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

void deletegreater(node* &head)
{
    node* temp=head;
    int pos=1;
    while(temp!=NULL)
    {
        if(temp->next->data>temp->data)
        {
            deletepos(head,pos);
        }
        pos++;
        temp=temp->next;
    }
}
 int main()
 {
    node* head=NULL;
    int arr[]={6,5,3,4,1,2};
    for(int i=0;i<=5;i++)
        insertend(head,arr[i]);
    display(head);
    deletegreater(head);
    display(head);
 }

