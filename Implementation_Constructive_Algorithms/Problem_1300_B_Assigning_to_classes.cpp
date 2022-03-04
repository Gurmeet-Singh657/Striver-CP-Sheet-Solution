#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin>>testcase;
    // let us say that partition one has 2k+1 elements and partition 2 has 2l+1 elements
    // this means for 2k+1 elements
    // ---k elements -------- mid1-----------k elements --------
    // for 2l+1 elements
    // ----l elements ----mid2 ----- l elements-----
    // also 2k+1 + 2l+1=2n
    // k+l = n-1
    // if mid1<mid2 
    // then k elements and l elements will be smaller than mid2 
    while(testcase>0)
    {
        int n;
        cin>>n;
        int arr[2*n];
        for(int i=0;i<2*n;i++)
        cin>>arr[i];
        sort(arr,arr+2*n);
        cout<<arr[n]-arr[n-1]<<endl;
        testcase--;
    }
    return 0;
}