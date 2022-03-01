#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin>>testcase;
    while(testcase>0)
    {
        int n;
        cin>>n;
        int digit=1;
        vector<int> ans;
        while(n!=0)
        {
            if(n%10!=0)
            ans.push_back(n%10 * digit);
            digit*=10;
            n/=10;
        }
        cout<<ans.size()<<endl;
        for(auto it:ans)
        cout<<it<<" ";
        cout<<endl;
        testcase--;
    }
    return 0;
}