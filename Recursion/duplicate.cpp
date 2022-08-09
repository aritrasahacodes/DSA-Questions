#include<iostream>
using namespace std;
string duplicate(string s)
{
    if(s.length()==0)
        return "";
    char ch=s[0];
    string a=duplicate(s.substr(1));
    if(ch==a[0])
    {
        return a;
    }
    else
    {
        return ch+a;
    }
}
int main()
{
    string s;
    cin>>s;
    cout<<duplicate(s);
}