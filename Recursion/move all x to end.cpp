#include<iostream>
using namespace std;
string move(string s)
{
    if(s.length()==0)
        return"";
    char ch=s[0];
    string ans=move(s.substr(1));
    if(s[0]=='x')
    {
        return ans+ch;
    }
    else
        return ch+ans;

}
int main()
{
    string s;
    getline(cin,s);
    cout<<move(s);
}