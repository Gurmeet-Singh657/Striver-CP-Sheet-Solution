#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(m%n!=0)
    cout<<-1<<endl;
    else{
    int target=m/n;
    int count2=0;
    while(target%2==0)
    {
        target/=2;
        count2++;
    }
    int count3=0;
    while(target%3==0)
    {
        target/=3;
        count3++;
    }
    if(target!=1)
    cout<<-1<<endl;
    else
    cout<<(count2+count3)<<endl;
    }
    return 0;
}