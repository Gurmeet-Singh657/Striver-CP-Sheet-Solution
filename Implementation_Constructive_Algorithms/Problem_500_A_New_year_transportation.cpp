#include<bits/stdc++.h>
using namespace std;
bool check(int arr[],int n,int t,int curr)
{
    if(curr==t)
    return true;
    if(curr>t)
    return false;
    return check(arr,n,t,curr+arr[curr]);
}
int main()
{
    int n,t;
    cin>>n>>t;
    int arr[n];
    for(int i=1;i<n;i++) cin>>arr[i];
    if(check(arr,n,t,1)==true)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}