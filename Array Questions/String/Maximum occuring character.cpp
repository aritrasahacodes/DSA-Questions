#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main()
{   
    string str;
    cin>>str;
    transform(str.begin(),str.end(),str.begin(),::tolower);
    int count[26];
    for(int i=0;i<str.length();i++)
    {
        count[str[i]-'a']++;
    }
    char ans='a';
    int mx=0;
    for(int i=0;i<26;i++)
    {
        if(count[i]>=mx)
        {
            mx=count[i];
            ans=i+'a';
        }
    }
    cout<<mx<<" "<<ans;
    return 0;
}