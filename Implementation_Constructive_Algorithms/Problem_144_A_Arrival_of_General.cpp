#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
        int ans=0;
    int mini=INT_MAX,maxi=INT_MIN;
    int minindex=-1,maxindex=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=mini)
        {
        mini=arr[i];
        minindex=i;
        }
        if(arr[i]>maxi)
        {
            maxi=arr[i];
            maxindex=i;
        }
        if(minindex<maxindex)
        ans=n-1-minindex+maxindex-1;
        else
        ans=n-1-minindex+maxindex;
    }
        cout<<ans<<endl;

    return 0;
}