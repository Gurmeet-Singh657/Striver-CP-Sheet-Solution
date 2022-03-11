#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int arr[3];
        for(int i=0;i<3;i++)
        cin>>arr[i];
        int n;
        cin>>n; 
        sort(arr,arr+3);
        // equialize all elements according to the maximum element
        n-=(arr[2]-arr[0]);
        n-=(arr[2]-arr[1]);
        // check if coins are distributable bw three
        if(n>=0 && n%3==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}