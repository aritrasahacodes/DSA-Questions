#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int *ptr;
    ptr=&a;             //same as *ptr=a;
    cout<<&a<<endl;     //address of variable a
    cout<<ptr<<endl;    //address of variable a
    cout<<*ptr<<endl;   //value stored in variable a

    //ptr++;              // +4 in address of a(int type)
    cout<<++*ptr<<endl;   // value getting updated
    cout<<ptr<<endl;        
    cout<<*ptr++<<endl;    //pointer updates
    cout<<ptr<<endl;


    int arr[]={10,20,30};
    cout<<*arr<<endl;


}