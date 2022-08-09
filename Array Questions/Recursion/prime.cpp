#include <iostream>

using namespace std;

int main()
{
    int num,b,a=2;
    cout<<"Enter a number: ";
    cin>>num;
    while(a<=num)
    {
        b=2;
        while(b<a)
        {
            if(a%b==0)
                a+=1;
            else
                b+=1;
        }
        cout<<"\n"<<a;
        a+=1;
    }

    return 0;
}