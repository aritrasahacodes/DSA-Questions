#include<iostream>
#include<string>
using namespace std;

string reverse(string str)
{
    int n=str.size();
    for(int i=0;i<=str.size()/2;i++)
    {
        int temp=str[i];
        str[i]=str[n-1];
        str[n-1]=temp;
        n-=1;
    }
    return str;
}
int main()
{
    string str;
    cin>>str;
    cout<<reverse(str);
}