#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin>>testcase;
    while(testcase>0)
    {
        int row,col;
        cin>>row>>col;
        char arr[row][col];
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            cin>>arr[i][j];
        }
        // only the last row and last col will create problem 
        // since we cannot go down on last row 
        // and cannot go right on last col
        int count=0;
        for(int i=0;i<row-1;i++)
        if(arr[i][col-1]=='R') 
        count++;
        for(int j=0;j<col-1;j++)
        if(arr[row-1][j]=='D') 
        count++;
        cout<<count<<endl;
        testcase--;
    }
    return 0;
}