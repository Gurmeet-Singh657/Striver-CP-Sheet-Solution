#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int currval=1;
    int maxval=1;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        currval++;
        else
        {
        maxval=max(maxval,currval);
        currval=1;
        }
    }
    maxval=max(currval,maxval);
    cout<<maxval<<endl;
    return 0;
}