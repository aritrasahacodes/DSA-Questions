#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<10;i++)
    {   
        cout<<"* ";
        if(i%2==0)
            continue;
        cout<<endl;
    }
}