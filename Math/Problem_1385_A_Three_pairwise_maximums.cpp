#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(x==y && x>=z && y>=z)
        {
            cout<<"YES"<<endl;
            cout<<z<<" "<<z<<" "<<y<<endl;
        }
        else if(y==z && y>x && z>x)
        {
            cout<<"YES"<<endl;
            cout<<x<<" "<<x<<" "<<z<<endl;
        }
        else if(z==x && z>y && x>y)
        {
            cout<<"YES"<<endl;
            cout<<y<<" "<<y<<" "<<z<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}