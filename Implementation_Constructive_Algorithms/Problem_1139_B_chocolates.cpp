#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i+1]==0) arr[i]=0;
        else if(arr[i]>=arr[i+1])
        arr[i]=arr[i+1]-1;

    }
    int sum=0;
    for(int i=0;i<n;i++)
    sum+=arr[i];
    cout<<sum<<endl;
    return 0;
}