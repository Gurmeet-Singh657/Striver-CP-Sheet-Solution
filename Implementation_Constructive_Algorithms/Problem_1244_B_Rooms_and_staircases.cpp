#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int testcase;
    cin>>testcase;
    while(testcase>0)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        int i=0;
        while(i<n && str[i]=='0')
        {
            i++;
        }
        int startpos=i;
        i=n-1;
        while(i>=0 && str[i]=='0')
        {
        i--;
        }
        int endpos=i;
        if(i==-1)
        cout<<n<<endl;
        else
        {
            cout<<max(2*(startpos+1),max(2*(endpos+1),max(2*(n-endpos),2*(n-startpos))))<<endl;
        }
        testcase--;
    }
    return 0;
}