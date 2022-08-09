#include<iostream>
#include<string>
using namespace std;
int reverse(string str,int i)
{
    if(i==str.size())
        return -1;
    reverse(str,i+1);
    cout<<str[i];
    return 0;
}
int main()
{
    int i=0;
    string str;
    cout<<"Enter your string:";
    getline(cin,str);
    reverse(str,i);
}