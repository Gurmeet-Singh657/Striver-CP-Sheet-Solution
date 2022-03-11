#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int n;
        cin>>n;
        n--;
        n=n/2;
        cout<<n+1<<endl;
    }
    return 0;
}