#include<iostream>
using namespace std;
 void subseq(string s,string ans)
 {
    if(s.size()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int ass=ch;
    string ros=s.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+ch);
    subseq(ros,ans+to_string(ass));
 }
int main()
{
    subseq("ABC","");
    cout<<endl;
}