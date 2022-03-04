#include<bits/stdc++.h>
using namespace std;
bool isvowel(char ch)
{
    if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U' || ch=='Y' || ch=='y')
    return true;
    return false;
}
int main()
{
    string str;
    cin>>str;
    string ans="";
    for(int i=0;i<str.length();i++)
    {
        if(!isvowel(str[i]))
        {
            ans+='.';
            if(str[i]>='A' && str[i]<='Z')
            ans+=str[i]-'A'+'a';
            else
            ans+=str[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}