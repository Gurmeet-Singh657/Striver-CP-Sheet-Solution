#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int sum=0;
    int ans=i;
    for(i=1;i<=n;i++)
    {
        int level=i*(i+1)/2;
        sum+=level;
        if(sum>n)
        break;
    }
    cout<<i-1<<endl;
    return 0;
}