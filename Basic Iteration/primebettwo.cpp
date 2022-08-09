#include<iostream>
using namespace std;
void prime(int,int);
int main()
{
    int m,n;
    cout<<"Enter two values:";
    cin>>m>>n;
    prime(m,n);
    return 0;
}
void prime(int x,int y)
{
    int a=x+1,b;
    while(a<y)
    {
        b=1;
        while(b<=a)
        {
            if(a%b==0)
            {
                a+=1;
                break;
            }
            else
            b+=1;
        }
        cout<<a<<" ";
        a+=1;
    }
}