#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int n,m;
    cin>>n>>m;
    int matrix[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cin>>matrix[i][j];
    }
    // searching for zeros
    vector<vector<int>> creatematrix(n,vector<int>(m,1));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]==0)
            {
                for(int k=0;k<n;k++)
                creatematrix[k][j]=0;
                for(int k=0;k<m;k++)
                creatematrix[i][k]=0;
            }
        }
    }
    vector<vector<int>> testmatrix(n,vector<int>(m,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           if(creatematrix[i][j]==1)
           {
               for(int k=0;k<n;k++)
                testmatrix[k][j]=1;
                for(int k=0;k<m;k++)
                testmatrix[i][k]=1;
           } 
        }
    }
    // check if original matrix and the current matrix are matching
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(testmatrix[i][j]!=matrix[i][j])
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cout<<creatematrix[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}