#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int testcase;
    cin>>testcase;
    while(testcase>0)
    {
        string str;
        cin>>str;
        string hash;
        cin>>hash;
        if(str.length()>hash.length())
        cout<<"NO"<<endl;
        else
        {
            sort(str.begin(),str.end());
        string ans="NO";
        for(int i=0;i<=hash.length()-str.length();i++)
        {
            string tocheck=hash.substr(i,str.length());
            sort(tocheck.begin(),tocheck.end());
            if(str==tocheck)
            {
                cout<<"YES"<<endl;
                ans="YES";
                break;
            }
        }
        if(ans=="NO")
        cout<<"NO"<<endl;
        }
        testcase--;
    }
    return 0;
}