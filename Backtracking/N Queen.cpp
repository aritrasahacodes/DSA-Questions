#include<iostream>
using namespace std;
bool isSafe(int** board, int row,int col,int N)
{
    for(int i=0;i<N;i++)
    {
        if(board[row][i]==1)
            return false;
        if(board[i][col]==1)
            return false;
    }
    for(int i=row,j=col;i>=0;i--,j--)
    {
        if(board[i][j]==1)
            return false;
    }
    for(int i=row,j=col;i>=0;i--,j++)
    {
        if(board[i][j]==1)
            return false;
    }
    return true;
}
bool nQueen(int** board,int row,int N)
{
    if(row==N)
        return true;
    for(int col=0;col<N;col++)
    {
        if(isSafe(board,row,col,N))
        {
            board[row][col]=1;
        if(nQueen(board,row+1,N))
            return true;
        board[row][col]=0;
        }
    }
    return false;
}
int main()
{
    int N;
    cout<<"Enter the value of N: ";
    cin>>N;
    int** board=new int*[N];
    for(int i=0;i<N;i++)
    {
        board[i]=new int[N];
        for(int j=0;j<N;j++)
        {
            board[i][j]=0;
        }
    }
    if(nQueen(board,0,N))
    {
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
        cout<<"No solutin exist for N = "<<N;
    return 0;
}