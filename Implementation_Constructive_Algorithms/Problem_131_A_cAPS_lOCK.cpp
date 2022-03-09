#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    bool flag=false;
    for(int i=0;i<str.length();i++)
    {
        if(i!=0 && str[i]>='a' && str[i]<='z') // if i am getting lowercase letter other than 1st index
        {
            flag=true;
            break;
        }
    }
    if(flag==false)
    {
        for(int i=0;i<str.length();i++)
        {
            if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-'a'+'A';
            else
            str[i]=str[i]-'A'+'a';
        }
    }
    cout<<str<<endl;
    return 0;
}