#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int prec(char c)
{
    if(c=='^')
        return 3;
    else if(c=='*'||c=='/')
        return 2;
    else if(c=='+'||c=='-')
        return 1;
    else
        return -1;
}

string infixtoprefix(string s)
{
    reverse(s.begin(),s.end());

    stack<char> ch;
    string res;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z' || s[i]>='A'&&s[i]<='Z')
            res+=s[i];
        else if(s[i]==')')
            ch.push(s[i]);
        else if(s[i]=='(')
        {
            while(!ch.empty()&&ch.top()!=')')
            {
                res+=ch.top();
                ch.pop();
            }
            if(!ch.empty())
                ch.pop();
        }
        else
        {
            while(!ch.empty() && prec(ch.top())>prec(s[i]))
            {
                res+=ch.top();
                ch.pop();
            }
            ch.push(s[i]);
        }
    }
    while(!ch.empty())
    {
        res+=ch.top();
        ch.pop();
    }
    reverse(res.begin(),res.end());
    return res;
}

int main()
{
    cout<<infixtoprefix("(a-b/c)*(a/k-l)")<<endl;
}
