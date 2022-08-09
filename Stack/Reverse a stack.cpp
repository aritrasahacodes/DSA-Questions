#include<iostream>
#include<stack>
using namespace std;

void insertbottom(stack<int>&s,int a)
{
    if(s.empty())
    {
        s.push(a);
        return;
    }
    int x=s.top();
    s.pop();
    insertbottom(s,a);
    s.push(x);
    return;
}
void reversestack(stack<int> &s)
{
    if(s.empty())
    {
        return;
    }
    int a=s.top();
    s.pop();
    reversestack(s);

    insertbottom(s,a);
    return;
}

void display(stack<int>s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

int main()
{
    stack<int> s;
    for(int i=0;i<5;i++)
        s.push(i+1);
    display(s);
    reversestack(s);
    display(s);
}

