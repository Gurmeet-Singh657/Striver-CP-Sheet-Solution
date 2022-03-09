#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int testcase;
    cin>>testcase;
    while(testcase>0)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        int i=0,j=n-1;
        bool flag=true;
        while(i<=j)
        {
            char firstchar=str[i];
            char secondchar=str[j];
            if((char)(firstchar-1)==(char)(secondchar-1) ||
            (char)(firstchar-1)==(char)(secondchar+1)
            || (char)(firstchar+1)==(char)(secondchar-1)
            || (char)(firstchar+1)==(char)(secondchar+1))
            {
                
            }
            else
            {
                flag=false;
                break;
            }
            i++;
            j--;
        }
        if(flag==false)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
        testcase--;
    }
    return 0;
}