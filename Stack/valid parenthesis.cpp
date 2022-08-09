#include<iostream>
#include<stack>
using namespace std;   
    
    
    bool isValid(string s) 
    {
        stack <char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                st.push(s[i]);
            }
            else if(s[i]==')' && st.top()=='(')
                st.pop();
            else if(s[i]=='}' && st.top()=='{')
                st.pop();
            else if(s[i]==']' && st.top()=='[')
                st.pop();
        }
        if(st.empty()==1)
            return true;
        return false;
    }

    int main()
    {
        string s={"({[()]()})"};
        cout<<isValid(s);
    }