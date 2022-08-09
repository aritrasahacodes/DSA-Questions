#include<iostream>
#include<math.h>
using namespace std;
bool isSafe(int board[9][9],int r,int c,int n)
{
    if(board[r][c]==0)
    {
    for(int i=0;i<9;i++)
    {
        if(board[r][i]==n)
            return false;
        if(board[i][c]==n)
            return false;
    }
        float a=r;
        float b=c;
        int p,q;
        float i=ceil(a/3.0);
        float j=ceil(b/3.0);
        if(i==1)
            p=0;
        else if(i==2)
            p=3;
        else if(i==3)
            p=6;
        if(j==1)
            q=0;
        else if(j==2)
            q=3;
        else if(j==3)
            q=6;
        int m=p+3;
        int n=q+3;
        for(;p<m;p++)
        {
            for(;q<n;q++)
            {
                cout<<p<<" "<<q<<endl;
                if(board[p][q]==n)
                {
                    return false;
                }
            }
        }
    }
    return true;
}

int main()
{
    int board[9][9]={ {3, 0, 6, 5, 0, 8, 4, 0, 0}, 
         {5, 2, 0, 0, 0, 0, 0, 0, 0}, 
         {0, 8, 7, 0, 0, 0, 0, 3, 1}, 
         {0, 0, 3, 0, 1, 0, 0, 8, 0}, 
         {9, 0, 0, 8, 6, 3, 0, 0, 5}, 
         {0, 5, 0, 0, 9, 0, 6, 0, 0}, 
         {1, 3, 0, 0, 0, 0, 2, 5, 0}, 
         {0, 0, 0, 0, 0, 0, 0, 7, 4}, 
         {0, 0, 5, 2, 0, 6, 3, 0, 0} };
    cout<<isSafe(board,4,7,1);
}