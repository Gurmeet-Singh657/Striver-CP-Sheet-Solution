#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    ll numberofdigits=0;
    ll temp=n;
    while(temp>0)
    {
        numberofdigits++;
        temp/=10;
    }
    ll ans=0;
    if(n/(ll)pow(10,numberofdigits-1)==9)
    {
    ans+=9*(ll)pow(10,numberofdigits-1);
    n=n%(ll)pow(10,numberofdigits-1);
    numberofdigits--;
    }
    while(numberofdigits>0)
    {
        ll curr=n/(ll)pow(10,numberofdigits-1);
        if(curr>=5)
        ans+=(9- curr)*(ll)pow(10,numberofdigits-1);
        else
        ans+=curr*(ll)pow(10,numberofdigits-1);
        n=n%(ll)pow(10,numberofdigits-1);
        numberofdigits--;
    }
    cout<<ans<<endl;
    return 0;
}