#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    string ans="";
    int count=1;
    for(int i=0;i<str.length();i++)
    {
        int currcount=0;
        ans+=str[i];
        while(currcount<count)
        {
            currcount++;
            i++;
        }
        count++;
    }
    cout<<ans<<endl;
    return 0;
}