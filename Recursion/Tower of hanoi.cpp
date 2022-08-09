#include<iostream>
using namespace std;
void towerofHanoi(int n,char src,char dest,char temp)
{
    if(n==0)
    {
        return;
    }
    towerofHanoi(n-1,src,temp,dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    towerofHanoi(n-1,temp,dest,src);
}
int main()
{
    int n;
    cout<<"Enter no. of discs: ";
    cin>>n;
    towerofHanoi(n,'A','C','B');

}