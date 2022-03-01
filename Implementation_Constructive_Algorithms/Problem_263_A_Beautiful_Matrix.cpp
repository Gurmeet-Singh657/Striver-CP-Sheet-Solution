#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5][5];
    int start,end;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                start=i;
                end=j;
            }
        }
    }
    cout<<abs(2-start)+abs(2-end)<<endl;
    return 0;
}