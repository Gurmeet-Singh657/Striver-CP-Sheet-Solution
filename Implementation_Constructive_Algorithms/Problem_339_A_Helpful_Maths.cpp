#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    string temp="";
    for(int i=0;i<str.length();i+=2)
    {
        temp+=str[i];
    }
    int j=0;
    sort(temp.begin(),temp.end());
    for(int i=0;i<str.length();i+=2)
    {
        str[i]=temp[j];
        j++;
    }
    cout<<str<<endl;
    return 0;
}