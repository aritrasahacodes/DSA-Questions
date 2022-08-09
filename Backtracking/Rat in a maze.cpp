#include<iostream>
using namespace std;
bool isSafe(int** maze,int row,int col,int N)
{
    if(row<N && col<N && maze[row][col]==1)
        return true;
    return false;
}
bool ratinMaze(int** maze,int row,int col,int N,int** ans)
{
    if(row==N-1 && col==N-1)
    {
        ans[row][col]=1;
        return true;
    }
    if(isSafe(maze,row,col,N))
    {
        ans[row][col]=1;
        if(ratinMaze(maze,row+1,col,N,ans))
        {
            return true;
        }
        if(ratinMaze(maze,row,col+1,N,ans))
        {
            return true;
        }
        ans[row][col]==0;
        return false;
    }
    return false;
}
int main()
{
    int n;
    cout<<"Enter the size of maze: ";
    cin>>n;
    int** maze=new int*[n];
    for(int i=0;i<n;i++)
    {
        maze[i]=new int[n];
    }
    cout<<"Enter the maze: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>maze[i][j];
        }
    }
    int** ans=new int*[n];
    for(int i=0;i<n;i++)
    {
        ans[i]=new int[n];
        for(int j=0;j<n;j++)
        {
            ans[i][j]=0;
        }
    }
    ratinMaze(maze,0,0,n,ans);
    cout<<"The path will be: "<<endl;
    if(ratinMaze(maze,0,0,n,ans))
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}

/*1 0 1 0 1
1 1 1 1 1
0 1 0 1 0
1 0 0 1 1
1 1 1 0 1 */