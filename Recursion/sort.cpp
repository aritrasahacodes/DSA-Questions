#include<iostream>
using namespace std;
bool flag=0;
bool sort(int A[30],int n)
{
    if(n>1)
    {
    if(*A>*(A+1))
    {
        flag++;
    }
    sort(A+1,n-1);
    }
    return flag;
}

int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int A[n];
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++)
        cin>>A[i];
    bool a=sort(A,n);
    if(a==0)
        cout<<"Sorted";
    else
        cout<<"Not sorted";
}