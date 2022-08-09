#include<iostream>
using namespace std;
#define n 100

class stack
{
    int* arr;
    int top;

    public:
    stack()
    {
        top=-1;
        arr=new int[n];
    }

    void push(int val)
    {
        if(top==n-1)
        {
            cout<<"Stack Overflow!!";
            return;
        }
        top+=1;
        arr[top]=val;
    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"No element to pop!";
            return;
        }
        top--;
    }

    int Top()
    {
        cout<<"Top is: "<<arr[top]<<endl;
    }

    bool empty()
    {
        return top==-1;
    }
};

int main()
{
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.Top();
    s.pop();
    s.Top();
}