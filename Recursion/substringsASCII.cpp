#include<iostream>
using namespace std;
string substring(string s,string ans)
{
    if(s.size()==0)
    {
        cout<<ans<<endl;
        return "";
    }
    char ch=s[0];
    int ass=s[0];
    string ros=s.substr(1);
    substring(ros,ans);
    substring(ros,ans+ch);
    substring(ros,ans+to_string(ass));
}
int main()
{
    substring("AB","");
}