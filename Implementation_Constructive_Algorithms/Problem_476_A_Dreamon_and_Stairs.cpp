#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n<m)
    cout<<-1<<endl;
    else if(n==0)
    cout<<0<<endl;
    else
    {
        int minsteps=0;
        if(n%2!=0) minsteps=1;
        minsteps+=(n/2);
        bool flag=false;
        for(int i=minsteps;i<=n;i++)
        {
            if(i%m==0)
            {
                flag=true;
                cout<<i<<endl;
                break;
            }
        }
        if(flag==false)
        cout<<-1<<endl;
    }
    return 0;
}