#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int sum=w* (w+1)/2;
    sum=k*sum;
    sum-n<0 ? cout<<0<<endl : cout<<sum-n<<endl;
    return 0;
}