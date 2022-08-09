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

int remove(node* &head)
{
    int arr[10]={0};
    node* temp=head;
    int count=1;
    while(temp!=NULL)
    {
        if(arr[temp->data]==1)
        {
            return count;
        }
        arr[temp->data]=1;
        count++;
        temp=temp->next;
    }
    for(int i=0;i<10;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
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
 int main()
 {
    node* head=NULL;
    int arr[]={1,2,3,4,3,6};
    for(int i=0;i<=5;i++)
        insertend(head,arr[i]);
    display(head);
    int pos=remove(head);
    deletepos(head,pos);
    cout<<pos<<endl;
    display(head);
 }

