#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of letters: ";
    cin>>n;
    char word[n+1],rev[n+2];
    cout<<"Enter your word: ";
    cin>>word;
    bool check=1;
    for(int i=0;i<n;i++)
    {
        if(word[i]!=word[n-1-i])
        {
            check=0;
            break;
        }
    }
    if(check==1)
        cout<<word<<" is a palindrome";
    else
        cout<<word<<" is not a palindrome";
        
    /*for(int i=0,j=n;i<n;i++,j--)
    {
        rev[j]=word[i+1];
    }
    cout<<rev<<endl<<word<<endl;
    if('word'=='rev')
        cout<<word<<" is a palindrome";
    else
        cout<<word<<" is not a palindrome";*/
}