#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int a,b;
        cin>>a>>b;
        // first option acc to first side
        int f=max(2*b,a);
        // second option acc to second side
        int s=max(2*a,b);
        cout<<(min(f,s)*min(f,s))<<endl;
    }
    return 0;
}