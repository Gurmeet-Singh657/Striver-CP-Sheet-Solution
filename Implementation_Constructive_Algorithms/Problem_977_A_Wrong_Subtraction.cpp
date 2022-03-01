#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int operation;
    cin>>operation;
    while(operation>0)
    {
        if(n%10==0)
        n/=10;
        else
        n-=1;
        operation--;
    }
    cout<<n<<endl;
    return 0;
}