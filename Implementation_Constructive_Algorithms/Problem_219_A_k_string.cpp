#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    string str;
    cin>>str;
    if(k==1)
    cout<<str<<endl;
    else
    {
        int freq[26]={0};
        for(int i=0;i<str.length();i++)
        freq[str[i]-'a']++;
        bool flag=0;
        for(int i=0;i<26;i++)
        {
            if(freq[i]>0 && freq[i]%k!=0)
            {
                cout<<"-1"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            string ans="";
            for(int i=0;i<26;i++)
            {
                int count=freq[i]/k;
                for(int j=0;j<count;j++)
                ans+=(char)(i+'a');
            }
            string temp="";
            for(int i=0;i<k;i++)
            temp+=ans;
            cout<<temp<<endl;
        }
    }
    return 0;
}