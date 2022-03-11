#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int testcase;
    cin>>testcase;
    while(testcase>0)
    {
        int l,r;
        cin>>l>>r;
        int a=l*2;
        if(r>=a)
        cout<<l<<" "<<(l*2)<<endl;
        else
        cout<<-1<<" "<<-1<<endl;
        testcase--;
    }
    return 0;
}