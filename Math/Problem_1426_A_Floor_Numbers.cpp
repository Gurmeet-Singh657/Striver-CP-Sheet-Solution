#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int n,x;
        cin>>n>>x;
        if(n==1 || n==2) 
        {
            cout<<1<<endl;
        }
        else
        {
            int val=n-3;
            cout<<(val/x)+2<<endl;
        }
    }
    return 0;
}