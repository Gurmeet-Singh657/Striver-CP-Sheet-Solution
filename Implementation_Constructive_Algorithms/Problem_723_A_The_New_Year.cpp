#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(b>=a && b<=c || b>=c && b<=a)
    cout<<abs(b-a)+abs(b-c)<<endl;
    else if(c>=a && c<=b || c>=b && c<=a)
    cout<<abs(c-a)+abs(c-b)<<endl;
    else
    cout<<abs(a-b)+abs(a-c)<<endl;
    return 0;
}