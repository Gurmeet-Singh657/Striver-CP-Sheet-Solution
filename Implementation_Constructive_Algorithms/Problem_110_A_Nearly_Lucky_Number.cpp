#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    int countlucky=0;
    while(n!=0)
    {
        if(n%10==4 || n%10==7) countlucky++;
        n/=10;
    }
    if(countlucky==4 || countlucky==7) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}