#include<iostream>
#include<String>
using namespace std;
void replace(string str)
{
    if(str.size()==0)
        return;
    if(str[0]=='p'&&str[1]=='i')
    {
        cout<<3.14;
        replace(str.substr(2));
    }
    else
    {
        cout<<str[0];
        replace(str.substr(1));
    }
}
int main()
{
    string s;
    cout<<"Enter a string:";
    getline(cin,s);
    replace(s);
}