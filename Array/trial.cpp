    #include<iostream>
    #include<vector>
    using namespace std;
    
    void setZeroes(vector<vector<int>>& matrix)
     {
        vector<vector<int>> ans (0,matrix.size());
        for(int i=0;i<matrix[i].size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    for(int k=0;k<matrix[i].size();k++)
                    {
                        ans[k][j]=0;
                        ans[i][k]=0;
                    }
                }
            }
        }
        for(int i=0;i<matrix[i].size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }

    }

    int main()
    {
        vector <vector<int>> s {{1,1,1},{1,0,1},{1,1,1}};
        setZeroes(s);
        return 0;
    }