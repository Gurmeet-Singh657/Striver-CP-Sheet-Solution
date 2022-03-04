#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin>>testcase;
    while(testcase>0)
    {
        int n;
        cin>>n;
        int countdigits=0;
        int temp=n;
        int rem=n%10;
        while(temp!=0)
        {
            countdigits++;
            temp=temp/10;
        }
        int ans=10*(rem-1);
        ans+=(countdigits*(countdigits+1)/2);
        cout<<ans<<endl;
        testcase--;
    }
    return 0;
}