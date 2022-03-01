#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    int maxcapacity=b[0];
    int currcapacity=b[0];
    for(int i=1;i<n-1;i++)
    {
        currcapacity-=a[i];
        currcapacity+=b[i];
        maxcapacity=max(currcapacity,maxcapacity);
    }
    cout<<maxcapacity<<endl;
    return 0;
}