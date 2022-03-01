#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++)
    cin>>arr[i];
    int temp[n+1];
    for(int i=1;i<=n;i++)
    {
        temp[arr[i]]=i;
    }
    for(int i=1;i<=n;i++)
    cout<<temp[i]<<" ";
    cout<<endl;
    return 0;
}