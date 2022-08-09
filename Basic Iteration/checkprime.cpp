#include<iostream>
using namespace std;
int main()
{
    int a=2,n,b=0;
    cout<<"Enter your no:";
    cin>>n;
    while(n>a)
    {
        if(n%a==0)
        {
        cout<<n<<" is not a prime no.";
        b=1;
        break;
        }
        else
        a+=1;
    }
    if(b==0)
    cout<<n<<" is a prime no.";
    return 0;
}