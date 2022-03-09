#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin>>testcase;
    while(testcase>0)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        if(a<c)
        cout<<1<<" ";
        else
        cout<<-1<<" ";

        long long int val = a*b;
        if(val>c)
        cout<<b<<endl;
        else
        cout<<-1<<endl;
        testcase--;
    }
    return 0;
}