#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int freq[26]={0};
    for(int i=0;i<str.length();i++)
    freq[str[i]-'a']++;
    int countdistinct;
    for(int i=0;i<26;i++)
    if(freq[i]>=1)
    countdistinct++;
    if(countdistinct%2==0)
    cout<<"IGNORE HIM!"<<endl;
    else
    cout<<"CHAT WITH HER!"<<endl;
    return 0;
}