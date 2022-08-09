#include <iostream>
#include<math.h>
using namespace std;

bool isSafe(int board[9][9],int r,int c,int n)
{
    for(int i=0;i<9;i++)
    {
        if(board[i][c]==n)
            return false;
        if(board[r][i]==n)
            return false;
    }
    float a=r;
    float b=c;
    int i,j;
    if(ceil(a/3.0)==1)
        i=0;
    else if(ceil(a/3.0)==2)
        i=3;
    else if(ceil(a/3.0)==3)
        i=6;
    if(ceil(b/3.0)==1)
        j=0;
    else if(ceil(b/3.0)==2)
        j=3;
    else if(ceil(b/3.0)==3)
        j=6;
    int x=i+3,y=j+3;
    for(;i<x;i++)
    {
        for(;j<y;j++)
        {
        if(board[i][j]==n)
            return false;
        }
        j=y-3;
    }
    return true;
}
void sudoku(int board[9][9],int i,int j)
{
    if(i==8 && j==8)
    {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    if(board[i][j]==0)
    {
        for(int k=1;k<=9;k++)
        {
            if(isSafe(board,i,j,k))
            {
                cout<<i<<" "<<j<<" "<<k<<endl;
                board[i][j]=k;
                if(j==8)
                {
                    j=0;
                    sudoku(board,i+1,j);
                    board[i][j]==0;
                }
                sudoku(board,i,j+1);
                board[i][j]==0;
            }
        }
    }
}
int main() 
{   int board[9][9]={ {3, 0, 6, 5, 0, 8, 4, 0, 0}, 
         {5, 2, 0, 0, 0, 0, 0, 0, 0}, 
         {0, 8, 7, 0, 0, 0, 0, 3, 1}, 
         {0, 0, 3, 0, 1, 0, 0, 8, 0}, 
         {9, 0, 0, 8, 6, 3, 0, 0, 5}, 
         {0, 5, 0, 0, 9, 0, 6, 0, 0}, 
         {1, 3, 0, 0, 0, 0, 2, 5, 0}, 
         {0, 0, 0, 0, 0, 0, 0, 7, 4}, 
         {0, 0, 5, 2, 0, 6, 3, 0, 0} };
         
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            sudoku(board,i,j);
        }
    }
    return 0;
}