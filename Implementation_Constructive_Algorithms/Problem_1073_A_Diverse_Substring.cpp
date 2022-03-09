#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    string ans="NO";
    if(n==1)
    cout<<"NO"<<endl;
    else
    {
        for(int i=0;i<n-1;i++)
        {
            if(str[i]!=str[i+1])
            {
                ans="YES";
                cout<<"YES"<<endl;
                cout<<str.substr(i,2)<<endl;
                break;
            }
        }
        if(ans=="NO")
        cout<<"NO"<<endl;
    }
    return 0;
}