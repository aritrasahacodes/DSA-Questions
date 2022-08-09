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

void insertatEnd(node* &head,int val)
{
    node* n=new node(val);

    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;

    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=n;
}

void display(node* head)
{
    cout<<"The Linked List is as follows:"<<endl;
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void insertathead(node* &head,int val)
{
    node* n=new node(val);
    node* temp=head;
    head=n;
    n->next=temp;
}

bool search(node* head,int key)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}

void deleteathead(node* head)
{
    node* todelete=head;
    head=head->next;
    delete todelete;
}

void deletion(node* head,int val)
{
    if(head==NULL)
    {
        cout<<"Empty Linked List";
    }
    if(head->next==NULL)
    {
        deleteathead(head);
        return;
    }
    node* temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

int main()
{
    node* head=NULL;
    char ch='y';
    cout<<"Creating Linked List:"<<endl;
    while(ch=='y'||ch=='Y')
    {
        int n;
        cout<<"Enter the data for new node: ";
        cin>>n;
        insertatEnd(head,n);
        cout<<"Do you want to insert more elements(Y/N): ";
        cin>>ch;
    }
    display(head);


    cout<<"Do you want to insert at head:(Y/N): ";
    cin>>ch;
    while(ch=='y'||ch=='Y')
    {
        int n;
        cout<<"Enter the data for new node: ";
        cin>>n;
        insertathead(head,n);
        cout<<"Do you want to insert more elements(Y/N): ";
        cin>>ch;
    }
    display(head);


    int N;
    cout<<"Enter the no to be searched:";
    cin>>N;
    cout<<search(head,N)<<endl;

    ch='y';
    while(ch=='y'||ch=='Y')
    {
        int n;
        cout<<"Enter the value to be deleted ";
        cin>>n;
        deletion(head,n);
        cout<<"Do you want to delete more elements(Y/N): ";
        cin>>ch;
    }
    display(head);
    return 0;
}