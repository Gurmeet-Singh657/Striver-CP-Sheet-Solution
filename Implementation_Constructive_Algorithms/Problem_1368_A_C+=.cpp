#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin>>testcase;
    while(testcase>0)
    {
        int a,b,n;
        cin>>a>>b>>n;
        int oper=0;
        while(a<=n && b<=n)
        {
            if(a<b)
            a+=b;
            else
            b+=a;
            oper++;
        }
        cout<<oper<<endl;
        testcase--;
    }
    return 0;
}