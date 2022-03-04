#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin>>testcase;
    while(testcase>0)
    {
        string str;
        cin>>str;
        int count=0;
        bool flag=0;
        int sum=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='0' && flag==1) // means previously 1 should be there
            count++;
            if(str[i]=='1')
            {
            flag=1;
            sum+=count;
            count=0;
            }
        }
        cout<<sum<<endl;
        testcase--;
    }
    return 0;
}