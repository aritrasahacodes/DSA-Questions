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

 void deletewo(node* &ptr)
 {
    node* todelete=ptr->next;
    ptr->data=ptr->next->data;
    ptr->next=ptr->next->next;
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
    node* ptr=head;
    deletewo(ptr);
    display(head);
 }