#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    string handcard[5];
    for(int i=0;i<5;i++)
    cin>>handcard[i];
    bool flag=1;
    for(int i=0;i<5;i++)
    {
        if(handcard[i][0]==str[0] || handcard[i][1]==str[1])
        {
        cout<<"YES"<<endl;
        flag=0;
        break;
        }
    }
    if(flag==1)
    cout<<"NO"<<endl;
    return 0;
}