#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int x,y,n;
        cin>>x>>y>>n;
        n-=y;
        n/=x;
        cout<<n*x+y<<endl;
    }
    return 0;
}