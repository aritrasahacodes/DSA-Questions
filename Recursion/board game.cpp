#include<iostream>
using namespace std;
int boardgame(int s,int e)
{
    if(s==e)
        return 1;
    if(s>e)
    {
        return 0;
    }
    int b=0;
    for(int i=s;i<=6;i++)
    {
        b+=boardgame(i+1,e);
    }
    return b;
}
int main()
{
    cout<<boardgame(0,3);
}