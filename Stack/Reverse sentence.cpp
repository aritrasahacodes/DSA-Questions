#include<iostream>
#include<stack>
using namespace std;
void reverse(string s)
{
    stack<string> st;
    for(int i=0;i<s.size();i++)
    {
        string word="";
        while(s[i]!=' ' && i<s.size())
        {
            word+=s[i];
            i++;
        }
        st.push(word);
    }

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main()
{
    string s;
    cout<<"Enter your string: ";
    getline(cin,s);
    reverse(s);
    return 0;
}