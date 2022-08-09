#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cin.ignore();

    char s[n+1];
    cout<<"Enter your sentence:";
    cin.getline(s,n);
    cin.ignore();
    int i=0;
    int currlen=0,maxlen=0;

    while(1)
    {
        if(s[i]==' ' or s[i]=='\0')
        {
            if(currlen>maxlen)
            {
                maxlen=currlen;
            }
            currlen=0;
        }
        currlen++;
        if(s[i]=='\0')
            break;
        i++;
    }

    cout<<"maximum length is: "<<maxlen<<endl;
    return 0;
}